#pragma once
#include "parallelogram.h"
class Rectangle : public  Parallelogram
{
protected:
    Rectangle(std::string name, int a, int b, int c, int d, int A, int B, int C, int D);

public:
    Rectangle(int a, int b, int c, int d, int A, int B, int C, int D);
};