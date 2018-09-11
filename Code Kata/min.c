#include<stdio.h>
int main()
{
	int a[30],i,n,x;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	x = a[0];
	for (i = 0; i < n; i++) 
	{
		if (a[i] < x) 
		{
			x = a[i];
		}
	}
	printf("%d",x);
	return (0);
}
