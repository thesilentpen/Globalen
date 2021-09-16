#include "Direction.h"

direction::direction()
{
	vectorCoordinates = glm::vec3(0.0, 0.0, 0.0);
}

direction::direction(double x, double y, double z)
{
	vectorCoordinates = glm::vec3(x, y, z);
}

direction::direction(glm::vec3 vC)
{
	vectorCoordinates = vC;
}

direction::~direction() {}
