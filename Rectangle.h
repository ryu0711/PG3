#pragma once
#include "IShape.h"
#include<stdio.h>

class Rectangle : public IShape
{
public:

	void Size();

	void Draw();

private:

	float radius_ = 20.0f;

};

