#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int linearsearch(const int array[], int key, int size);
int main()
{
	int a[SIZE], x, searchkey, element;
	for (x = 0; x < SIZE; x++)
	{
		a[x] = 2 * x;
	}
	printf("Enter integer search key:\n");
	scanf("%d",&searchkey);
	element = linearsearch(a, searchkey, SIZE);
	if (element != -1)
	{
		printf("Found value in element %d\n",element);
	}
	else
	{
		printf("Value not found\n");
	}
	system("pause");
	return 0;
}
int linearsearch(const int array[], int key, int size)
{
	int n;
	for (n = 0; n < size; n++)
	{
		if (array[n] == key)
		{
			return n;
		}
	}
	return -1;
}