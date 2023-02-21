#include<stdio.h>
int fact(int n)
{
     if(n==1)
          return 1;
     return n*fact(n-1);
}
     int main()
{
    int n,x;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("The Factorial %d is \n",n);
    x=fact(n);
    printf("%d",x);
    return 0;
}
