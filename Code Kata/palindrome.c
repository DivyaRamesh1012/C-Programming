#include<stdio.h>
int main()
{
    int n,a=0,rem,b;
    scanf("%d",&n);
    b=n;
    while(n!=0)
    {
        rem=n%10;
        a=a*10 +rem;
        n=n/10;
    }
    if(a==b)
        printf("yes");
    else
        printf("no");
    return 0;

}
