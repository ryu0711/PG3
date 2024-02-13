#include "Circle.h"
#include<stdio.h>

void Circle::Size()
{
	radius_ = radius_ * radius_ * pi_;
}

void Circle::Draw()
{
	printf("%f\n", radius_);
}