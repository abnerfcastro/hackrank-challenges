/*!
 * src/main.cpp
 * 
 * main function for project
 * Author: Abner Castro
 * Date: April 21st, 2017
 */

#include <iostream>
#include <sstream>
#include <limits>
#include <string>

void process_string(std::string);
inline bool is_even(int);

/*!
 * Input Format
 * The first line contains an integer, T (the number of test cases).
 * Each line i of the T subsequent lines contains a String, S 
 */
int main() {
    // first character is not needed
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string s;    
    while (std::getline(std::cin, s))
    {
        process_string(s);
        if (std::cin.good()) std::cout << std::endl;
    }     

    return 0;
}

void process_string(std::string str)
{
    std::stringstream odd, even;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (is_even(i))
            even << str[i];        
        else
            odd << str[i];
    }
    std::cout << even.str() << " " << odd.str();        
}

inline bool is_even(int number) { return (number % 2 == 0); }