#pragma once
#include "glm/glm.hpp"
#include "ostream"

class Vertex {
public:
	Vertex() : pos(glm::vec3(0.0, 0.0, 0.0)), w(1.0) { }
	Vertex(float xIn, float yIn, float zIn, float wIn) :pos(glm::vec3(xIn, yIn, zIn)), w(wIn) { };
	Vertex(glm::vec3 vec, double wIn) :pos(glm::vec3(vec.x, vec.y, vec.z)), w(wIn) {}
	Vertex operator+(glm::vec3 vec);
	Vertex operator-(glm::vec3 vec);
	Vertex operator*(glm::vec3 vec);
	bool operator==(Vertex temp);
	double distance(glm::vec3 vec);
	friend std::ostream& operator<<(std::ostream& os, Vertex& dt);
	glm::vec3 pos;
	double w;
};