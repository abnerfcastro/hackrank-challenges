/*!
 * src/student.cpp
 * 
 * Student class definition
 * Author: Abner Castro
 * Date: April 30th, 2017
 */

#include "../includes/student.h"

Student::Student(std::string firstName, std::string lastName, int identification, std::vector<int> scores)
    : Person(firstName, lastName, identification)
{
    this->testScores = scores;
}

char Student::calculate()
{
    int sum = 0;
    for (unsigned int i = 0; i < testScores.size(); i++) {
        sum += testScores[i];
    }

    int average = sum / testScores.size();

    if (average >= 90 && average <= 100) return 'O';
    if (average >= 80 && average < 90)   return 'E';
    if (average >= 70 && average < 80)   return 'A';
    if (average >= 55 && average < 70)   return 'P';
    if (average >= 40 && average < 55)   return 'D';
    if (average < 40)                    return 'T';
    else return '\0';
}