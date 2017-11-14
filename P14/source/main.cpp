#include <stdio.h>
#include <stdlib.h>
#define students 3
#define exams 4
int min(const int grade[][exams], int pupils, int tests);
int max(const int grade[][exams], int pupils, int tests);
double average(const int setofGrades[], int tests);
void printArray(const int grades[][exams], int pupils, int tests);
int student;
const int studentGrades[students][exams] = { { 77,68,86,73 },{ 96,87,89,78 },{70,90,86,81} };
int main()
{
	printf("The array is:\n");
	printArray(studentGrades, students, exams);
	printf("\n\nLowest grade: %d\nHighest grade: %d\n",(min(studentGrades, students, exams)),(max(studentGrades, students, exams)));
	for (student = 0; student < students; student++)
	{
		printf("The average grade for student %d is %.2f\n",student,average(studentGrades[student],exams));

	}
	system("pause");
	return 0;
}
void printArray(const int grade[][exams], int pupils, int tests)
{
	int i, j;
	printf("		  [0]  [1]  [2]	 [3]");
	for (i = 0; i < pupils; i++)
	{
		printf("\nstudentGrades[%d]",i);
		for (j = 0; j < tests; j++)
		{
			printf("%5d",grade[i][j]);
		}
	}
}
int min(const int grade[][exams], int pupils, int tests)
{
	int i, j;
	int lowgrade = 100;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grade[i][j] < lowgrade)
			{
				lowgrade = grade[i][j];
			}
		}
	}
	return lowgrade;
}
int max(const int grade[][exams], int pupils, int tests)
{
	int i, j;
	int highgrade = 0;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grade[i][j] > highgrade)
			{
				highgrade = grade[i][j];
			}
		}
	
	}
	return highgrade;
}
double average(const int setofgrades[], int tests)
{
	int i;
	int total = 0;
	for (i = 0; i < tests; i++)
	{
		total += setofgrades[i];
	}
	return (double)total / tests;
}