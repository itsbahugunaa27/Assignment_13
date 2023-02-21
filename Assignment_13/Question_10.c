#include<stdio.h>
int pow(int n,int m)
{
     if(m==0)
          return 1;
     return n*pow(n,m-1);
}
int main()
{
    int n,m,x;
    printf("Enter the number \n");
    scanf("%d%d",&n,&m);
    printf("The power is %d ",pow(n,m));
    return 0;
}
