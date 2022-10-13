//Hello World

#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

#define LEAP_YEAR 4

int main() //Hello World
{
	int yearOne;
	int yearTwo;
	printf("Enter the first years: ");
	scanf_s("%d", &yearOne);
	printf("\nEnter the second year: ");
	scanf_s("%d", &yearTwo);

	int iterations; 
	if (yearTwo > yearOne)
	{
		iterations = (yearTwo - yearOne) / LEAP_YEAR;
	}
	else 
	{
		iterations = (yearOne - yearTwo) / LEAP_YEAR;
	}

	if (yearOne % 4 == 0 && yearTwo % 4 == 0)
	{
		printf("Both years are a leap year!\n");

		//int i = 0;
		for (int i = 0; i < iterations; i++) //inital value; condition; inc/dec
		{
			yearOne = yearOne + 4;
			printf("%d\n", yearOne);
		}
	}

	return 0;

}