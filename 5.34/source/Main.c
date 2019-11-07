
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int x, y;
	scanf_s("%d%d", &x, &y);
	printf("%d", power(x, y));
	system("pause");
	return 0;
}
int power(x, y)
{
	int x1 = 1;
	for (int i = 0; i < y; i++)
	{
		x1 = x1 * x;
	}

	return x1;
}