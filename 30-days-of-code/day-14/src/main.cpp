/*!
 * src/main.cpp
 * 
 * main function for project
 * Author: Abner Castro
 * Date: April 9th, 2017
 */

#include <iostream>
#include <vector>

#include "../includes/difference.h"

int main()
{
    int N;
    std::cin >> N;

    std::vector<int> vec;
    for (auto i = 0; i < N; i++) {
        int tmp;
        std::cin >> tmp;
        vec.push_back(tmp);
    }

    Difference diff(vec);
    diff.computeDifference();

    std::cout << diff.getMaximumDifference();

    return 0;
}