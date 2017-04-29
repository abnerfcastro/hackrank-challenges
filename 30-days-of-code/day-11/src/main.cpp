/*!
 * src/main.cpp
 * 
 * main function for project
 * Author: Abner Castro
 * Date: April 29th, 2017
 */

#include <iostream>
#include <vector>
#include <limits>

const int OUT_OF_BOUNDS = std::numeric_limits<int>::min();

void populate(std::vector< std::vector<int> > &);
int find_hourglass(std::vector< std::vector<int> >, unsigned int, unsigned int);

int main()
{
    std::vector< std::vector<int> > array(6, std::vector<int>(6));
    populate(array);
    
    int largest = std::numeric_limits<int>::min();
    for (unsigned int i = 0; i < array.size(); i++) {
        for (unsigned int j = 0; j < array.size(); j++) {
            int hourglass = find_hourglass(array, i, j);
            if (hourglass == OUT_OF_BOUNDS) continue;
            largest = (hourglass > largest) ? hourglass : largest;                
        }
    }

    std::cout << largest;

}

void populate(std::vector< std::vector<int> > &array)
{
    for (unsigned int i = 0; i < array.size(); i++) {
        for (unsigned int j = 0; j < array.size(); j++) {
            std::cin >> array[i][j];
        }
    }
}

int find_hourglass(std::vector< std::vector<int> > array, unsigned int i, unsigned int j)
{
    unsigned int border_limits = array.size() - 2;
    if (i >= border_limits || j >= border_limits) return OUT_OF_BOUNDS;

    int sum = 0;
    sum += array[i][j];
    sum += array[i][j+1];
    sum += array[i][j+2];
    sum += array[i+1][j+1];
    sum += array[i+2][j];
    sum += array[i+2][j+1];
    sum += array[i+2][j+2];

    return sum;    
}