#pragma once
#include "glm/glm.hpp"

class direction {


private:
	glm::vec3 vectorCoordinates;
public:
	direction();
	direction(double x, double y, double z);
	direction(glm::vec3 vC);
	~direction();
};