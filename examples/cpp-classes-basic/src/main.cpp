/*!
 * src/main.cpp
 * 
 * main function for project
 * Author: Abner Castro
 * Date: April 9th, 2017
 */

#include <iostream>

#include "../includes/rectangle.h"

int main() {
    Rectangle rect;
    Rectangle recb(5, 5);
    rect.set_values(3, 4);
    std::cout << "The area is " << rect.area() << std::endl;
    std::cout << "The area is " << recb.area() << std::endl;
    return 0;    
}