#include <stdio.h>
void main()
{
	int i, j, a, n, x[30];
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
		scanf("%d", &x[i]);
	for (i = 0; i < n; ++i) 
	{
		for (j = i + 1; j < n; ++j)
		{
			if (x[i] > x[j]) 
			{
				a =  x[i];
				x[i] = x[j];
				x[j] = a;
			}
		}
	}
	for (i = 0; i < n; ++i)
		printf("%d\n", x[i]);
}
