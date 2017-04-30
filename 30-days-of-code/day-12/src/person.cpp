/*!
 * src/person.cpp
 * 
 * Person class definition
 * Author: Abner Castro
 * Date: April 30th, 2017
 */

#include "../includes/person.h"

Person::Person(std::string firstName, std::string lastName, int identification)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->id = identification;
}

void Person::printPerson()
{
    std::cout << "Name: " << lastName << ", " << firstName << std::endl << "ID: " << id << std::endl;
}