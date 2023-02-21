#include<stdio.h>
int sum(int n)
{
     if(n%10==n)
       return n;
     return (n%10)+sum(n/10);
}
int main()
{
    int n,x;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("The sum of n digit of %d is \n",n);
    x=sum(n);
    printf("%d",x);
    return 0;
}

