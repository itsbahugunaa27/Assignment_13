#include<stdio.h>
int sum(int n)
{
          if(n==1)
          return 2;
          return (2*n)+sum(n-1);
}
int main()
{
        int n;
        printf("Enter the limit\n");
        scanf("%d",&n);
        printf("The sum of 1 to %d Even naturals numbers are \n",n);
        printf("%d",sum(n));
        return 0;
}
