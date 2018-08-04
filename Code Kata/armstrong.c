#include <stdio.h>
#include <math.h>
void main()
{
    int n,sum=0,rem=0,x=0,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        rem=n%10;
        x=pow(rem,3);
        sum=sum+x;
        n=n/10;
    }
    if(sum==t)
        printf ("yes");
    else
        printf ("no");
}
