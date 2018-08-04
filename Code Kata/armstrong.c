#include<stdio.h>
int main()
{
    int n,a,rem,t=0;
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        rem=a%10;
        t+=(rem*rem*rem);
        a/=10;
    }
    if(t==n)
        printf("yes");
    else
        printf("no");
    return 0;
}
    

