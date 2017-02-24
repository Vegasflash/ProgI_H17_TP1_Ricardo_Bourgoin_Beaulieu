#pragma once

#include <math.h>
#include <typeinfo>
#include <cmath>

struct Vector3D
{
	float x, y, z;
};

Vector3D Add(const Vector3D* const left, const Vector3D* const right);
Vector3D Substract(const Vector3D* const left, const Vector3D* const right);
Vector3D Scale(const Vector3D* vect, const float scale);
float Dot(const Vector3D left, const Vector3D right);
Vector3D CrossLH(const Vector3D* left, const Vector3D* right);
Vector3D CrossRH(const Vector3D* left, const Vector3D* right);
void MoveBy(const Vector3D* by, /*ES*/ Vector3D* toMove);
float Length(const Vector3D* vect);
float LengthSq(const Vector3D* vect);
bool Normalize(const Vector3D* vect);
void ScaleBy(Vector3D* vect, const float scale);
bool Equals(const Vector3D* const  left,
	const Vector3D* const right);