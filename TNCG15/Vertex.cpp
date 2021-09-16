#include "Vertex.h"

Vertex Vertex::operator+(glm::vec3 vec)
{
	pos.x += vec.x;
	pos.y += vec.y;
	pos.z += vec.z;
	return *this;
}

Vertex Vertex::operator-(glm::vec3 vec)
{
	pos.x -= vec.x;
	pos.y -= vec.y;
	pos.z -= vec.z;
	return *this;
}

Vertex Vertex::operator*(glm::vec3 vec)
{
	pos.x *= vec.x;
	pos.y *= vec.y;
	pos.z *= vec.z;
	return *this;
}

bool Vertex::operator==(Vertex temp)
{
	if (pos.x == temp.pos.x || pos.y == temp.pos.y || pos.z == temp.pos.z) {
		return false;
	}
	else
		return true;
}

double Vertex::distance(glm::vec3 vec)
{
	return sqrt(pow(pos.x - vec.x, 2.0) + pow(pos.y - vec.y, 2.0) + pow(pos.z - vec.z, 2.0));
}

std::ostream& operator<<(std::ostream& os, Vertex& dt)
{
	os << "x:"<<dt.pos.x << " y:" << dt.pos.y << " z:" << dt.pos.z << std::endl;
	return os;
}
