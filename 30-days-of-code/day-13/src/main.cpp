/*!
 * src/main.cpp
 *
 * main function for project
 * Author: Abner Castro
 * Date: April 30th, 2017
 */

#include <iostream>

#include "../includes/book.h"
#include "../includes/mybook.h"

using namespace std;

int main()
{
    string title, author;
    int price;    

    getline(cin, title);
    getline(cin, author);
    cin >> price;

    MyBook novel(title, author, price);

    novel.display();

    return 0;
}