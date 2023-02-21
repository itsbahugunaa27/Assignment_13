#include<stdio.h>
int sum(int n)
{
    if(n==1)
        return 1;
    return n+sum(n-1);
}
int main()
{
    int n,x;
    printf("Enter the limit \n");
    scanf("%d",&n);
    printf("The sum of 1 to %d naturals numbers is \n",n);
    x=sum(n);
    printf("%d",x);
    return 0;
}
