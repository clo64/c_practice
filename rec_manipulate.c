#include "rec_manipulate.h"

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

struct point mid_point(struct rectangle a){
    
    struct point tempPoint;
    tempPoint.x = ((a.upper_left.x + a.lower_right.x)/2);
    tempPoint.y = ((a.upper_left.y + a.lower_right.y)/2);
    return tempPoint;
    
}

struct rectangle move_rec(struct rectangle a, int x, int y){
    
    struct rectangle tempRec;
    tempRec.upper_left.x = a.upper_left.x + x;
    tempRec.lower_right.x = a.lower_right.x + x;
    tempRec.upper_left.y = a.upper_left.y + y;
    tempRec.lower_right.y = a.lower_right.y +y;
    return tempRec;
    
}

bool within_bounds(struct rectangle a, struct point p){
    
    if(p.x > a.upper_left.x && p.x < a.lower_right.x && p.y > a.lower_right.y 
       && p.y < a.upper_left.y)
    return TRUE;
    else return FALSE;
    
}
