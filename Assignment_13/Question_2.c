#include<stdio.h>
int sum(int m)
{
     if(m==1)
     return 1;
     return((2*m-1)+sum(m-1));
}
int main()
{
    int m,x;
    printf("Enter the limit \n");
    scanf("%d",&m);
    printf("The sum of 1 to %d  Odd naturals numbers is \n",m);
    x=sum(m);
    printf("%d",x);
    return 0;
}
