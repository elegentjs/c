#include<stdio.h>
#include<math.h>

/**
 * 求两点之间的距离
 */

double dist(double x1, double y1, double x2, double y2);

int main(int argc, char const *argv[])
{
    double x1, y1, x2, y2;

    x1 = 1.0, y1 = 1.0;
    x2 = 2.0, y2 = 2.0;

    double distance = dist(x1, y1, x2, y2);

    printf("%f, %f, %f, %f, distance: %f \n", x1, y1, x2, y2, distance);
    
    return 0;
}


double dist(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
