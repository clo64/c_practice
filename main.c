#include <stdio.h>
#include "rec_manipulate.h"

int main()
{
   
     struct rectangle a;
     struct point b;
     struct point p;
     a.upper_left.x = 0;
     a.upper_left.y = 4;
     a.lower_right.x = 4;
     a.lower_right.y = 0;
     
     int tempArea = 0;
     
     tempArea = area(a);
     
     printf("The area of your rectangle is: %d\n", tempArea);
    
     b = mid_point(a);
     
     printf("The midpoint of your rectangle is x: %d, Y: %d\n", b.x, b.y);
     
     //Move rectangle right 3 units
     //Print both sets of coordinates
     
     a = move_rec(a, 3, 0);
     
     printf("Rectangle has been moved\n");
     printf("Upper left x: %d, y: %d\n", a.upper_left.x, a.upper_left.y);
     printf("Lower right x: %d, y: %d\n", a.lower_right.x, a.lower_right.y);
     
     //Is the point (2, 3) within bounds?
     p.x = 2;
     p.y = 3;
     a.upper_left.x = 0;
     a.upper_left.y = 4;
     a.lower_right.x = 4;
     a.lower_right.y = 0;
     
     if(within_bounds(a, p) == TRUE)
     {
         printf("Point is within bounds\n");
     }
     else
     {
         printf("Point is not within bounds\n");
     }
    
    return 0;
}
