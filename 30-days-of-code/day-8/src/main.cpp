/*!
 * src/main.cpp
 * 
 * main function for project
 * Author: Abner Castro
 * Date: April 23rd, 2017
 */

#include <iostream>
#include <string>
#include <map>

using std::string;

int main()
{
    std::map<string, string> phone_book;
    std::map<string, string>::iterator it;

    int n;
    std::cin >> n;
    std::cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string name, phone;
        std::cin >> name >> phone;
        phone_book.insert(std::make_pair(name, phone));
    }
    
    std::cin.ignore();

    string query;
    while (std::getline(std::cin, query))
    {
        it = phone_book.find(query);

        if (it != phone_book.end())
            std::cout << it->first << "=" << it->second << std::endl;
        else
            std::cout << "Not found" << std::endl;
    }  

    return 0;
}