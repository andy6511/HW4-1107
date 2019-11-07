#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y,sum;
	scanf_s("%d%d", &x, &y);
	sum = (x * y) / GCD(x, y);
	printf("%d\n", sum);
	system("pause");
	return 0;
}
int GCD(int a, int b) {
	if (b) while ((a %= b) && (b %= a));
	return a + b;
}