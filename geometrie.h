
typedef struct Vect3d {

    float x;
    float y;
    float z;
} Vect3d;

typedef struct Vect2d {

    float x;
    float y;
} Vect2d;


typedef struct Point {

    float x;
    float y;
} Point ;


typedef  struct Rect {

    Point point1;
    Point point2;
    
} Rect ;


typedef struct Triangle {
    Point pt1;
    Point pt2;
    Point pt3;
}Triangle;

float processDistBetwPoint (Point p1, Point p2);
float triangleSurface(Triangle triangle);