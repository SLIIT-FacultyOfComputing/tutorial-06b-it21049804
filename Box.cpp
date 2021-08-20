#include "Box.h"
// Implement setters and getters
void box::setlength(int l)
{
  length=l;
}
void box::setwidth(int w)
{
  width=w;
}
void box::setheight(int h)
{
 height=h ;
}
int box::getLength()
{
  return length;
}
int box::getWidth()
{
  return width;
}
int box::getHeight()
{
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length*width*height;
}
