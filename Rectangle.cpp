#include "Rectangle.h"
#include<stdio.h>

void Rectangle::Size()
{
	radius_ = radius_ * radius_;
}

void Rectangle::Draw()
{
	printf("%f\n", radius_);
}