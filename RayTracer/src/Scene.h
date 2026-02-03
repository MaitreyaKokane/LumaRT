#pragma once
#include <glm/glm.hpp>
#include "Vector"

struct Sphere
{
	glm::vec3 Position{ 0 };
	float Radius = 0.5f;
	glm::vec3 Albedo{ 0.5f };
};

struct Scene
{
	std::vector<Sphere> Sphere;
};