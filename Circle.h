#pragma once
#include "IShape.h"
#include<stdio.h>

class Circle : public IShape
{
public:

	void Size();

	void Draw();

private:


	float radius_ = 20.0f;

	float pi_ = 3.14f;

};


