/*!
 * src/difference.cpp
 *
 * Difference class definition.
 * Author: Abner Castro
 * Date: May 1st, 2017
 */

#include "../includes/difference.h"

Difference::Difference(std::vector<int> elements) : m_elements(elements)
{
    // sort array to always compare with the last element
    std::sort(m_elements.begin(), m_elements.end());
}

int Difference::getMaximumDifference() const
{
    return m_maximum_difference;
}

void Difference::computeDifference()
{
    auto max = 0;
    auto last = m_elements.back();

    // my lambda function to calculate absolute value for integers
    auto absolute = [](const int number) { return (number > 0) ? number : number * (-1); };

    for (auto elem : m_elements) {
        auto diff = absolute(last - elem);
        max = (diff > max) ? diff : max;
    }

    m_maximum_difference = max;
}