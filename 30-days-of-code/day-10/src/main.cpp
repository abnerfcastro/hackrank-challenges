/*!
 * src/main.cpp
 * 
 * main function for project
 * Author: Abner Castro
 * Date: April 9th, 2017
 */

#include <iostream>
#include <string>
#include <bitset>
#include <cmath>

using std::string;

int main()
{
    int decimal;
    std::cin >> decimal;

    // Were we to use Boost::dynamic_bitset, we could find out the necessary size of the bitset string
    // size_t digits = ceil(log2((double)decimal));    
    // std::cout << digits << std::endl;

    std::string binary = std::bitset<20>(decimal).to_string();
    
    // std::cout << binary << std::endl;

    int ones_counter = 0;
    int consecultives = 0;

    for (unsigned int i = 0; i < binary.length(); i++)
    {
        ones_counter = (binary[i] == '1') ? ones_counter + 1 : 0;
        consecultives = (ones_counter != 0 && consecultives < ones_counter) ? ones_counter : consecultives;
    }

    std::cout << consecultives << std::endl;

    return 0;    
}