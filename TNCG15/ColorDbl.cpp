#include "ColorDbl.h"

ColorDbl::ColorDbl()
{
	color = glm::vec3(0.0, 0.0, 0.0);
}

ColorDbl::ColorDbl(float r, float g, float b)
{
	color = glm::vec3(r, g, b);
}

ColorDbl::ColorDbl(glm::vec3 c)
{
	color = c;
}

ColorDbl::~ColorDbl(){}

const float& ColorDbl::operator[](int i)
{
	return color[i];
}

std::ostream& operator<<(std::ostream& os, const ColorDbl& obj)
{
	os << "(" << obj.color.x << ", " << obj.color.y << ", " << obj.color.z << ")";

	return os;
}
