#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char statement[100];
    int n, i;
    system("cls");
    printf("Print any sentence:\n");
    gets(statement);
    printf("How many time you want to print the line:\n");
    scanf("%d",&n);
    system("cls");
    for (i=1;i<=n;i++)
    {
        printf("%s\n",statement);
    }
    getch();
}
