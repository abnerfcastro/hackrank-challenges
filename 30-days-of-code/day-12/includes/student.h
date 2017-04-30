/*!
 * includes/student.h
 * 
 * student class header
 * Author: Abner Castro
 * Date: April 30th, 2017
 */

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>

#include "person.h"

class Student : public Person {
	private:
		std::vector<int> testScores;
	public:
		Student(std::string, std::string, int, std::vector<int>);
		char calculate();
};

#endif