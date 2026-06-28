#include <stdio.h>

struct Brand
{
    char name[20];
};
int main()
{
    int n = 0;
    int m = 0, arid = 0;
    struct Brand brands[3] = {
        {"Samsung"
        ,"Usha"
        ,"LG"}
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
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("\n\t\t\tAvailable Brands\n");
           for (int i = 0; i < 3; i++)
            {
               printf("\t\t\t%d. %s\n", i + 1, brands[i].name);
            }
           break;

           case 2:
            printf("\nProducts Available\n");
          printf("\n1. Mobiles\n");
            printf("Name\t\tPrice\t\tID\n");
            printf("S23\t\t89999\t\t3457\n");
            printf("S24\t\t50000\t\t4567\n");
            printf("S25\t\t39000\t\t4598\n");
            printf("\n2. Refrigerators\n");
            printf("Name\t\tPrice\t\tID\n");
            printf("Refrigerator1\t67000\t\t455\n");
            printf("Refrigerator2\t56000\t\t456\n");
          printf("\n3. Laptops\n");
            printf("Name\t\tPrice\t\tID\n");
            printf("Laptop1\t\t98000\t\t678\n");
            printf("Laptop2\t\t67000\t\t788\n");
            printf("Laptop3\t\t76000\t\t768\n");
          printf("\nSelect Category 1,2,3: ");
            scanf("%d", &m);
            printf("Enter Device ID: ");
            scanf("%d", &arid);
            break;

        case 3:

            if (m == 1)
            {
                if (arid == 3457)
                printf("\nTotal Bill = 89999");
                else if (arid == 4567)
                printf("\nTotal Bill = 50000");
                else if (arid == 4598)
                printf("\nTotal Bill = 39000");
                else
                printf("\nInvalid Mobile ID");
            }
            else if (m == 2)
            {
                if (arid == 455)
                printf("\nTotal Bill = 67000");
                else if (arid == 456)
                printf("\nTotal Bill = 56000");
                else
                printf("\nInvalid Refrigerator ID");
            }
            else if (m == 3)
            {
                if (arid == 678)
                    printf("\nTotal Bill = 98000");
                else if (arid == 788)
                    printf("\nTotal Bill = 67000");
                else if (arid == 768)
                    printf("\nTotal Bill = 76000");
                else
                    printf("\nInvalid Laptop ID");
            }
            else
            {
                printf("\nNo product selected.");
            }
            printf("\n===== Thank You for Purchasing =====\n");
            break;
        default:
            printf("\nInvalid Choice! Please enter 1, 2 or 3.\n");
        }
    }
    return 0;
}