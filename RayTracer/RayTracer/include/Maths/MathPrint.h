#pragma once
#ifndef _MATHPRINT__H_
#define _MATHPRINT__H_

#include <glm/glm.hpp>

class MathPrint
{
public:
	MathPrint();
	~MathPrint();

	static void PrintMat4(glm::mat4 _mat);
	static void PrintMat3(glm::mat3 _mat);

	static void PrintVec4(glm::vec4 _vec);
	static void PrintVec3(glm::vec3 _vec);

};

#endif //_MATHPRINT__H_
