#include<stdio.h>
#include<conio.h>

int main()
{
  printf("\t\t Welcome To Prime Number Checker\n");
  while(1)
  {
    int n, i, temp;
    
    printf("Enter Any Number:");
    scanf("%d",&n);
    
    if(n>1)
    {
      for(i=2;n<(i/2);i++)
      {
        temp = n%i;
        if(temp==0)
          break;
      }
      if(temp==0) printf("%d is not a prime number",n);
      else printf("%d is a prime number",n);
    }
    else
    {
      printf("Enter A Valid Number!\n");
    }
    getch();
  }
}
