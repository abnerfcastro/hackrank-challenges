/*!
 * includes/person.h
 * 
 * person class header
 * Author: Abner Castro
 * Date: April 30th, 2017
 */

#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person
{
    protected:
        std::string firstName;
        std::string lastName;
        int id;
    public:
        Person(std::string, std::string, int);
        void printPerson();
};

#endif