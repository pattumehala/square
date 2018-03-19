#include<stdio.h>
int main()
{
int l,b,i,a;
printf("\nEnter the value of l and b:");
scanf("%d%d",&l,&b);
a=l*b;
for(i=0;i<=a;i++)
{
if(a==(i*i))
{
printf("\nyes it is a perfect square");
}
}
return 0;
}
