#include<stdio.h>
int count(int n)
{
     static int c=0;
  if(n==0)
     return c;
  else
     c++;
  count(n/10);
}
  int main()
{
    int n,x;
    printf("Enter the number \n");
    scanf("%d",&n);
    x=count(n);
    printf("The number of digit in %d is %d ",n,x);
    return 0;
}
