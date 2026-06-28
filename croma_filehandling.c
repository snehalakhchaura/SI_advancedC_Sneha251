#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    int category;
    int id;
    int price;
    char name[30];
};

void create_inventory_if_missing() {
    FILE *file = fopen("inventory.txt", "r");
    if (file != NULL) {
        fclose(file);
        return; 
    }

    file = fopen("inventory.txt", "w");
    if (file == NULL) {
        return;
    }

    fprintf(file, "1 3457 89999 S23\n");
    fprintf(file, "1 4567 50000 S24\n");
    fprintf(file, "1 4598 39000 S25\n");
    fprintf(file, "2 455 67000 Refrigerator1\n");
    fprintf(file, "2 456 56000 Refrigerator2\n");
    fprintf(file, "3 678 98000 Laptop1\n");
    fprintf(file, "3 788 67000 Laptop2\n");
    fprintf(file, "3 768 76000 Laptop3\n");
    
    fclose(file);
}

int main()
{
    create_inventory_if_missing();

    int n = 0;
    int m = 0, arid = 0;
    char brands[3][20] = {
        "Samsung",
        "Usha",
        "LG"
    };

    printf("\n\n");
    printf("\t\t\t\tCHROMA\n");
    printf("\t       ================= MENU =================\n");

    while (n != 3)
    {    
        printf("\n\t\t\t1. View Inventory Stock\n");
        printf("\t\t\t2. Purchase Items\n");
        printf("\t\t\t3. Checkout and Exit\n");
        printf("\nEnter your choice (1 , 2 , 3): ");
        if (scanf("%d", &n) != 1) {
            printf("\nInvalid input! Exiting.\n");
            break;
        }

        switch (n)
        {
        case 1:
            printf("\n\t\t\tAvailable Brands\n");
            for (int i = 0; i < 3; i++) {
                printf("\t\t\t%d. %s\n", i + 1, brands[i]);
            }
            break;

        case 2:
            {
                FILE *file = fopen("inventory.txt", "r");
                if (file == NULL) {
                    printf("\nError: Could not open inventory file!\n");
                    break;
                }

                struct Product prod;
                int last_cat = 0;

                printf("\nProducts Available\n");
                while (fscanf(file, "%d %d %d %29s", &prod.category, &prod.id, &prod.price, prod.name) != EOF) {
                    if (prod.category != last_cat) {
                        if (prod.category == 1) printf("\n1. Mobiles\n");
                        else if (prod.category == 2) printf("\n2. Refrigerators\n");
                        else if (prod.category == 3) printf("\n3. Laptops\n");
                        
                        printf("%-20s%-15s%s\n", "Name", "Price", "ID");
                        last_cat = prod.category;
                    }
                    printf("%-20s%-15d%d\n", prod.name, prod.price, prod.id);
                }
                fclose(file);

                printf("\nSelect Category 1,2,3: ");
                scanf("%d", &m);
                printf("Enter Device ID: ");
                scanf("%d", &arid);
            }
            break;

        case 3:
            {
                if (m < 1 || m > 3) {
                    printf("\nNo product selected.");
                    printf("\n===== Thank You for Purchasing =====\n");
                    break;
                }

                FILE *file = fopen("inventory.txt", "r");
                if (file == NULL) {
                    printf("\nError: Could not open inventory file to verify checkout!\n");
                    break;
                }

                struct Product prod;
                int found = 0;

                while (fscanf(file, "%d %d %d %29s", &prod.category, &prod.id, &prod.price, prod.name) != EOF) {
                    if (prod.category == m && prod.id == arid) {
                        printf("\nTotal Bill = %d", prod.price);
                        found = 1;
                        break;
                    }
                }
                fclose(file);

                if (!found) {
                    if (m == 1) printf("\nInvalid Mobile ID");
                    else if (m == 2) printf("\nInvalid Refrigerator ID");
                    else if (m == 3) printf("\nInvalid Laptop ID");
                }

                printf("\n===== Thank You for Purchasing =====\n");
            }
            break;

        default:
            printf("\nInvalid Choice! Please enter 1, 2 or 3.\n");
        }
    }

    return 0;
}