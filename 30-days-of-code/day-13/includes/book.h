/*!
 * includes/book.h
 * 
 * Book class header
 * Author: Abner Castro
 * Date: April 30th, 2017
 */

#ifndef BOOK_H
#define BOOK_H

#include <iostream>

using std::string;

class Book
{
    protected:
        string m_title;
        string m_author;
    public:
        // Constructors
        Book(string, string);
        
        // Virtual/Abstract method in C++
        virtual void display() = 0;
};

#endif