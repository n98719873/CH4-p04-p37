#include<stdio.h>
#include<stdlib.h>
#define students 3
#define exams 4
//比較出學生的最高與最低分以及計算出各學生的平均分數
int minimum(const int grades[][exams], int pupils, int tests);
int maximum(const int grades[][exams], int pupils, int tests);
double average(const int setOfGrades[], int tests);
void printArray(const int grades[][exams], int pupils, int tests);

int main(void)
{
	int student;
	const int studentGrades[students][exams] =
	{ { 77, 68, 86, 73 },
	  { 96, 87, 89, 78 },
	  { 70, 90, 86, 81 } };

	printf("The array is:\n");
	printArray(studentGrades, students, exams);

	printf("\n\nLowest grade: %d\nHighest grade: %d\n",
		minimum(studentGrades, students, exams),
		maximum(studentGrades, students, exams));
	
	for (student = 0; student < students; student++)
	{
		printf("The average grade for student %d is %.2f\n",
			student, average(studentGrades[student], exams));
	}
	system("pause");
	return 0;
}

int minimum(const int grades[][exams], int pupils, int tests)
{
	int i, j;
	int lowGrade = 100;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] < lowGrade)
			{
				lowGrade = grades[i][j];
			}
		}
	}
	return lowGrade;
}

int maximum(const int grades[][exams], int pupils, int tests)
{
	int i, j;
	int highGrade = 0;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > highGrade)
			{
				highGrade = grades[i][j];
			}
		}
	}
	return highGrade;
}

double average(const int setOfGrades[], int tests)
{
	int i;
	int total = 0;

	for (i = 0; i < tests; i++)
	{
		total = total + setOfGrades[i];
	}
	return (double)total / tests;
}

void printArray(const int grades[][exams], int pupils, int tests)
{
	int i, j;

	printf("                 [0]  [1]  [2]  [3]");

	for (i = 0; i < pupils; i++)
	{
		printf("\nstudentGrades[%d] ", i);
		for (j = 0; j < tests; j++)
			printf("%-5d", grades[i][j]);
	}
}