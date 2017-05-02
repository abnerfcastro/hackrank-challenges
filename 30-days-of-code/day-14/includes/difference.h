/*!
 * includes/difference.cpp
 *
 * Difference class header.
 * Author: Abner Castro
 * Date: May 1st, 2017
 */

#ifndef DIFFERENCE_H
#define DIFFERENCE_H

#include <iostream>
#include <vector>
#include <algorithm>

class Difference
{
  private:
    std::vector<int> m_elements;
    int m_maximum_difference;

  public:
    Difference(std::vector<int>);
    int getMaximumDifference() const;
    void computeDifference();
};

#endif