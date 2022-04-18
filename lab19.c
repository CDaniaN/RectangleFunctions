/*
Dania Naserddin
4-27-21
This program contains the functions ptinrect, rectPerimeter, and rectArea.
ptinrect tests whether a point structure is inside a rectangle structure.
rectPerimeter  calculates and returns the perimeter of a rectangle structure.
rectArea calculates and returns the area of a rectangle structure.
*/
#include <stdio.h>

typedef struct point{
int x;
int y;
}point;

typedef struct rect{
   point pt1; //bottom left
   point pt2; //top right
}rect;

void ptinrect(struct point point1, struct rect rect1)
{
  //if the point is in the rectangle
  if(point1.x > rect1.pt1.x && point1.x < rect1.pt2.x && point1.y > rect1.pt1.y && point1.y < rect1.pt2.y)
  {
    printf("The point is inside the rectangle\n"); //print out that it is
  }
  else
  {
    printf("The point is not inside the rectangle\n"); //pint that its not
  }
}

void rectPerimeter(struct point point1, struct rect rect1)
{
  int perimeter;
  perimeter = 2 * (rect1.pt1.x + rect1.pt1.y); //calculates perimeter of the rectangle
  printf("%d\n", perimeter);
}

void rectArea(struct point point1, struct rect rect1)
{
  int area;
  area = rect1.pt1.x * rect1.pt1.y; //calculates area of the rectangle
  printf("%d\n", area);
}

int main()
{
  struct point p1 = {20,30}; //hard code the points
  struct rect r1 = {{10,20}, {30,40}};
  ptinrect(p1, r1); //calls to ptinrect
  rectPerimeter(p1, r1); //calls to rectPerimeter
  rectArea(p1, r1); //calls to rectArea
  return 0;
}
