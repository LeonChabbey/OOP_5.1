#include "stdafx.h"
#include "Box.h"

Box::Box(double x, double y, double size_x, double size_y) : x(x), y(y), size_x(size_x), size_y(size_y)
{
}

Box::~Box()
{
}


// https://developer.mozilla.org/kab/docs/Games/Techniques/2D_collision_detection
bool Box::isColliding(Box& box2)
{
	if (x < box2.x + box2.size_x &&
		x + size_x > box2.x &&
		y < box2.y + box2.size_y &&
		size_y + y > box2.y) {
		return true;
	}

	return false;
}
