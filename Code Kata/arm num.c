#include <stdio.h>
#include <math.h>
int main()
{
    int m,n,i,a,b,rem,p=0,res=0;
    scanf("%d %d", &m,&n);
    for(i=m+1;i<n;++i)
    {
        b=i;
        a=i;
        while(a!=0)
        {
            a/=10;
            ++p;
        }
        while(b!=0)
        {
            rem=b%10;
            res+=pow(rem,p);
            b/= 10;
        }
        if(res==i) 
        {
            printf("%d ", i);
        }
        p=0;
        res=0;
    }
    return 0;
}
