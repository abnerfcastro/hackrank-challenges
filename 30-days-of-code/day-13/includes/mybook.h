/*!
 * includes/mybook.h
 * 
 * MyBook class header
 * Author: Abner Castro
 * Date: April 30th, 2017
 */

#ifndef MYBOOK_H
#define MYBOOK_H

#include <iostream>

#include "book.h"

using std::string;

class MyBook : public Book {
    private:
        int m_price;
    public:
        MyBook(string, string, int);
        void display();
};

#endif