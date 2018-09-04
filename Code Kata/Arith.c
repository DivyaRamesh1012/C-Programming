#include <stdio.h>
int main() 
{
    int a, b, c, x, y=0, i;
    scanf("%d", &c);
    scanf("%d", &a);
    scanf("%d", &b);
    x = a;
    for(i = 0; i < c; i++) 
    {
        y += x;
        x = x + b;
    }
    printf("%d",y);
    return 0;
}
