/*!
 * src/mybook.cpp
 * 
 * MyBook class definition
 * Author: Abner Castro
 * Date: April 30th, 2017
 */

#include "../includes/mybook.h"

MyBook::MyBook(string title, string author, int price)
    : Book(title, author), m_price(price)
{
}

void MyBook::display()
{
    using std::cout;
    using std::endl;

    cout << "Title: " << m_title << endl;
    cout << "Author: " << m_author << endl;
    cout << "Price: " << m_price << endl;    
}