#include <stdio.h>
int main()
{
	int a[50], n, i, b;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	b = a[0];
	for (i = 1; i < n; i++) 
	{
		if (b < a[i])
			b = a[i];
	}
	printf("%d", b);
	return 0;
}
