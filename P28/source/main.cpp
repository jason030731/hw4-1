#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void moda(int b[], int size);
void mode(int e);
int main()
{
	int a[SIZE] = { 0,1,2,3,4 };
	int i;
	printf("Effect of passing entire array by reference:\n\nThe values of the original array are:\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%3d", a[i]);
	}
	puts("");
	moda(a, SIZE);
	printf("The values of the modified array are:\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%3d",a[i]);
	}
	printf("\n\nEffect of passing array element by value:\n\nThe value of a[3] is %d\n",a[3]);
	mode(a[3]);
	printf("The value of a[3] is %d\n",a[3]);
	system("pause");
	return 0;	
}
void moda(int b[], int size)
{
	int j;
	for (j = 0; j < size; j++)
	{
		b[j] *= 2;
	}
}
void mode(int e)
{
	printf("Value in modifyElement is %d\n",e*=2);
}