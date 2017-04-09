/*!
 * src/main.cpp
 * 
 * main function for project
 * Author: Abner Castro
 * Date: April 9th, 2017
 */

#include <iostream>

int multiply(const int a, const int b)
{
    return a * b;
}

int main() {    
    int n;

    // Reads n from input file
    std::cin >> n;
    
    for (int i = 1; i <= 10; i++)
    {
        std::cout <<  n << " x " << i << " = " << multiply(n, i) << std::endl;
    }

    return 0;
}