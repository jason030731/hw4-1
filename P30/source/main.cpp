#include <stdio.h>
#include <stdlib.h>
void inverse(int *);
int main()
{
	int a[3] = { 3,5,7 }, i;
	for (i = 0; i < 3; i++)
		printf("%d  ",a[i]);
	puts("");
	inverse(a);
	for (i = 0; i < 3; i++)
		printf("%d  ",a[i]);
	puts("");
	system("pause");
	return 0;
}
void inverse(int *b)
{
	int tmp[3], i;
	for (i = 0; i < 3; i++)
		tmp[2 - i] = b[i];
	for (i = 0; i < 3; i++)
		b[i] = tmp[i];
}