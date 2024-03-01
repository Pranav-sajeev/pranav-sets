#include <stdio.h>
#include <math.h>
typedef struct point 
{
    float x, y;
} Point;

typedef struct line 
{
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);
int main()
{
    Line l =input_line();
    find_length(&l);
    output(l);
    return 0;
}
Point input_point()
{
    Point p;
    scanf("%f %f",&p.x,&p.y);
    return p;
}
Line input_line()
{
    Line l;
    printf("Enter coordinates of first point: ");
    l.p1 = input_point();
    printf("Enter coordinates of second point: ");
    l.p2 = input_point();
    return l; 
}
void find_length(Line *l)
{
    l->distance = sqrt(pow(l->p2.x - l->p1.x,2)+ pow(l->p2.y - l->p1.y,2));
}
void output(Line l)
{
    printf("The distance the points (%f,%f) and (%f,%f)is %.4f\n",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}