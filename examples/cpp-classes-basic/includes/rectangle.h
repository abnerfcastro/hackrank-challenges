/*!
 * includes/rectangle.cpp
 * 
 * Rectangle class header.
 * Author: Abner Castro
 * Date: April 9th, 2017
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
  private:
    int m_height;
    int m_width;

  public:
    Rectangle();
    Rectangle(int, int);
    void set_values(int, int);
    int area(void);
};

#endif