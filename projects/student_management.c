#include<stdio.h>   

int main()
{
    int choice = 0;
    int totalStudents = 0;
    int continueEntry;

    int rollNo[10];
    int english[10], maths[10], biology[10], computer[10], physics[10], chemistry[10];
    char studentName[10][30];

    printf("=========================================\n");
    printf("      STUDENT MARKS MANAGEMENT SYSTEM\n");
    printf("=========================================\n");

    while (1)
    {
        printf("\n1. Add Student Record\n");
        printf("2. View Student Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            do
            {
                if (totalStudents >= 10)
                {
                    printf("Maximum student limit reached!\n");
                    break;
                }

                while (getchar() != '\n');

                printf("\nEnter Student Name: ");
                fgets(studentName[totalStudents], 30, stdin);

                printf("Enter Roll Number: ");
                scanf("%d", &rollNo[totalStudents]);

                printf("Enter English Marks: ");
                scanf("%d", &english[totalStudents]);

                printf("Enter Maths Marks: ");
                scanf("%d", &maths[totalStudents]);

                printf("Enter Biology Marks: ");
                scanf("%d", &biology[totalStudents]);

                printf("Enter Computer Marks: ");
                scanf("%d", &computer[totalStudents]);

                printf("Enter Physics Marks: ");
                scanf("%d", &physics[totalStudents]);

                printf("Enter Chemistry Marks: ");
                scanf("%d", &chemistry[totalStudents]);

                totalStudents++;

                printf("\n1. Add Another Student\n");
                printf("2. Return to Main Menu\n");
                printf("Choice: ");
                scanf("%d", &continueEntry);

            } while (continueEntry == 1);

            break;

        case 2:

            if (totalStudents == 0)
            {
                printf("\nNo student records available.\n");
            }
            else
            {
                printf("\n========== STUDENT RECORDS ==========\n");

                for (int i = 0; i < totalStudents; i++)
                {
                    printf("\nStudent %d\n", i + 1);
                    printf("Name      : %s", studentName[i]);
                    printf("Roll No   : %d\n", rollNo[i]);
                    printf("English   : %d\n", english[i]);
                    printf("Maths     : %d\n", maths[i]);
                    printf("Biology   : %d\n", biology[i]);
                    printf("Computer  : %d\n", computer[i]);
                    printf("Physics   : %d\n", physics[i]);
                    printf("Chemistry : %d\n", chemistry[i]);
                    printf("-----------------------------------\n");
                }
            }

            break;

        case 3:
            printf("\nThank you for using the program.\n");
            return 0;

        default:
            printf("\nInvalid choice! Please enter 1, 2 or 3.\n");
        }
    }

    return 0;
}