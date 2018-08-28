#include<stdio.h>
int main()
{
int a,b,q=100000,i;
scanf("%d%d",&a,&b);
if(b<q)
{
for(i=a+1;i<=b;i++)
{
if(i%2!=0)
{
printf("%d\t",i);
}
}
}
}
