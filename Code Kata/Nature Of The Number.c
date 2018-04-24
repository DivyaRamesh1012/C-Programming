#include<stdio.h>
int main()
{
    int a;
    printf("Enter A Number: ");
    scanf("%d",&a);
    if (a>0)
        printf("Positive");
    else if (a<0)
        printf("Negative");
    else
        printf("Zero");
    return 0;
}
