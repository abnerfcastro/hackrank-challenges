/*!
 * src/main.cpp
 * 
 * main function for project
 * Author: Abner Castro
 * Date: April 9th, 2017
 */

#include <stdio.h>

/*
 * Rounding rules:
 *		- if the value of grade is less than 38, no rounding occurs;
 *		- if the difference between the grade and the
 *		next multiple of 5 is less than 3, round grade up to the next
 *		multiple of 5;
 */
int round_grade(const int grade)
{
	// if grade is less than 38, no rounding occurs
	if (grade < 38)
		return grade;
	
	// factor is how much to the next multiple of 5
	int factor = 5 - (grade % 5);
	int rounding_factor = (factor < 3) ? factor : 0;
	return grade + rounding_factor;
}

int main()
{
	// how many grades to round
	int n;
	scanf("%d", &n);

	int grade;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &grade);
		printf("%d\n", round_grade(grade));
	}
}