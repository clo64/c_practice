#include <stdio.h>

struct point {
        
        int x, y;
        
    };
    
struct rectangle {
        
        struct point upper_left, lower_right;
        
    };

int absolute_value(int a);
int area(struct rectangle a);

int main()
{
   
     struct rectangle a;
     a.upper_left.x = 2;
     a.upper_left.y = 4;
     a.lower_right.x = 4;
     a.lower_right.y = 2;
     
     int tempArea = 0;
     
     tempArea = area(a);
     
     printf("The area of your triangle is: %d\n", tempArea);
    
    return 0;
}

int area(struct rectangle a){
    
    int xLen, yLen;
    xLen = absolute_value(a.upper_left.x - a.lower_right.x);
    yLen = absolute_value(a.upper_left.y - a.lower_right.y);
    return xLen*yLen;
}

int absolute_value(int a){
    
    if(a<0)
    {
        return (a*-1);  
    }
    else return a;
    
}
