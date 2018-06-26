#include<stdio.h>
int main()

{
    int a,b,c[5],i,sum=0;
    scanf("%d%d%d",&a,&b,&c);
    for(i=0;i<=b;i++)
        sum=sum+i;
    printf("%d",sum);
    return 0;
}
