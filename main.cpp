#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"
#include "IShape.h"

int main()
{

	IShape* Shape_[2];

	for (int i = 0; i < 2; i++)
	{
		if (i < 1)
		{
			Shape_[i] = new Circle;
		}
		else
		{
			Shape_[i] = new Rectangle;
		}

	}

	for (int i = 0; i < 2; i++) 
	{
		Shape_[i]->Size();
	}

	for (int i = 0; i < 2; i++) 
	{
		Shape_[i]->Draw();
	}

	for (int i = 0; i < 2; i++)
	{
		delete Shape_[i];
	}

	return 0;
}