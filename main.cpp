#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "isosceles.h"
#include "equilateral.h"
#include "rTriangle.h"
#include "quadrangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhomb.h"


int main()
{
    Triangle triangle(10, 20, 30, 50, 60, 70);
    rTriangle rTriangle(10, 20, 30, 40, 50, 85); // угол не 90
    Isosceles isosceles(40, 20, 40, 70, 40, 70);
    Equilateral equilateral(30, 30, 30, 60, 60, 60);
    Quadrangle quadrangle(10, 20, 30, 60, 100, 80, 85, 90);
    Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
    Square square(20, 20, 20, 20, 90, 90, 90, 90);
    Parallelogram parallelogram(30, 20, 30, 20, 110, 70, 110, 70);
    Rhomb rhomb(30, 30, 50, 30, 100, 80, 100, 80); // стороны не равны
    return 0;
}