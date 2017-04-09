/*!
 * src/rectangle.cpp
 * 
 * Rectangle class definition.
 * Author: Abner Castro
 * Date: April 9th, 2017
 */

#include "../includes/rectangle.h"

Rectangle::Rectangle() {}

Rectangle::Rectangle(int height, int width)
{
	m_height = height;
	m_width = width;
}

void Rectangle::set_values(int height, int width)
{
    m_height = height;
    m_width = width;
}

int Rectangle::area()
{
    return m_height * m_width;
}