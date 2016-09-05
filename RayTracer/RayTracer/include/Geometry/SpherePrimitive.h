#pragma once
#include "AbstractPrimitive.h"
#include "Materials/BasicMaterial.h"


class SpherePrimitive :	public AbstractPrimitive
{
public:
	SpherePrimitive(glm::vec3 _centre, double _rad, AbstractMaterial *_material, Shader *_shader);
	~SpherePrimitive();

	bool Intersect(DistList &_distList, const Ray &_ray);
	bool PointInside(const glm::vec3 &_point);
	glm::vec3 Normal(const glm::vec3 &_point);
	glm::vec3 GetColour(const glm::vec3 &_point);

	//------------------------------------------------------------

	glm::vec3 m_centre;
	double m_radius;
};

