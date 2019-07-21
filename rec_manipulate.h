#ifndef REC_MANIP
#define REC_MANIP

/*
* typedef to produce boolean values
*/
typedef enum {FALSE, TRUE} bool;
/*
* Point struct, represents one pair of 2d coordinates.
*/
struct point {
        int x, y;
    };
/*
* Rectangle struct, represents two pairs of 2d coordinates.
* One upper left set of coordinates and one lower right.
*/
struct rectangle {
        struct point upper_left, lower_right;
    };

/*
* We require an absolute value function of some sort to ensure
* subtraction of coordinate points returns units of seperation
* and not numerical difference.
*/
int absolute_value(int a);

/*
* Receives nested rectangle struct and returns computed area 
* of rectangle from upper right set of coordinates and lower left set.
*/
int area(struct rectangle a);

/*
* Receives nested rectangle struct and computes mid point
* of the rectangle, returning the midpoint as a point contained
* within the point struct.
*/
struct point mid_point(struct rectangle a);

/*
* Translates a rectangle a given numer of x and y units in 2d space. 
* Receives a rectangle object and a pair of x and y coordinates as int
* Returns a rectangle object.
* The overhead for this function could be reduced in the future by use of
* pointers.
*/
struct rectangle move_rec(struct rectangle a, int x, int y);

/*
* Function determines whether given point is within the bounds of the 
* rectangle or not. Receives a rectangel struct and point struct.
* Returns boolean true or false.
*/
bool within_bounds(struct rectangle a, struct point p);
#endif
