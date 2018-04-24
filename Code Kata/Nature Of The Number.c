#include<stdio.h>
int main()
{
    int a;
    printf("Enter A Number: ");
    scanf("%d",&a);
    if (a>0)
        printf("%d Is Positive",a);
    else if (a<0)
        printf("%d Is Negative",a);
    else
        printf("%d Is Zero",a);
    return 0;
}
