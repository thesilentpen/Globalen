#pragma once
#include "glm/glm.hpp"
#include <iostream>

class ColorDbl
{
public:
	ColorDbl();
	ColorDbl(float r, float g, float b);
	ColorDbl(glm::vec3 c);
	~ColorDbl();
	const float& operator[](int i);
	friend std::ostream& operator<<(std::ostream& os, const ColorDbl& obj);
private:
	glm::vec3 color;
};
