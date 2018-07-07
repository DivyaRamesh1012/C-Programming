#include <stdio.h>
void printEven(int c, int n);
int main()
{
    int a, b;
    printf("Enter lower limit: ");
    scanf("%d", &a);
    printf("Enter upper limit: ");
    scanf("%d", &b);
    printf("Even Numbers from %d to %d are: ", a, b);
    printEven(a,b); 
    return 0;
}
void printEven(int c, int n)
{
    if(c > n)
        return;
    printf("%d, ", c);
    printEven(c+2, n);
}

