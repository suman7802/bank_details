#include <stdio.h>
typedef struct account
{
    char name[20], adress[20], type[10];
    int age;
} ac;
int main()
{
    int i, a, b;
    FILE *ptr;

    printf("welcom in abc bank holder's details\n");
    printf("Press 1 for new data and 2 for add data ");
    scanf("%d", &b);
    if (b == 1)
    {
        ptr = fopen("bank_details.txt", "w");
    }
    if (b == 2)
    {
        ptr = fopen("bank_details.txt", "a");
    }
    printf("how many holders details you want to save?  ");
    scanf("%d", &a);
    ac accounts[5];
    for (i = 0; i < a; i++)
    {
        printf("Enter the name of account holder no.%d : ", i + 1);
        fflush(stdin);
        gets(accounts[i].name);
        printf("Enter the adress of account holder no.%d : ", i + 1);
        fflush(stdin);
        gets(accounts[i].adress);
        printf("Enter the account type, holder no.%d ( current / savings ): ", i + 1);
        fflush(stdin);
        gets(accounts[i].type);
        printf("Enter the age of account holder no.%d : ", i + 1);
        scanf("%d", &accounts[i].age);
        printf("\n");
    }
    for (i = 0; i < a; i++)
    {
        printf("\t******** account holder no.%d*******\n", i + 1);
        printf("The name of account holder no.%d is %s\n", i + 1, accounts[i].name);
        printf("The adress of account holder no.%d is %s\n", i + 1, accounts[i].adress);
        printf("The account type, holder no.%d ( current / savings ) is %s\n", i + 1, accounts[i].type);
        printf("The age of account holder no.%d is %d years old\n\n", i + 1, accounts[i].age);

        fprintf(ptr, "\t******** account holder no.%d*******\n", i + 1);
        fprintf(ptr, "The name of account holder no.%d is %s\n", i + 1, accounts[i].name);
        fprintf(ptr, "The adress of account holder no.%d is %s\n", i + 1, accounts[i].adress);
        fprintf(ptr, "The account type, holder no.%d ( current / savings ) is %s\n", i + 1, accounts[i].type);
        fprintf(ptr, "The age of account holder no.%d is %d years old\n\n", i + 1, accounts[i].age);
    }
}