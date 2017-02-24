#include "Vector3D.h"

const float PI = 3.1415926535897f;
const double EPSILON = 0.0001;

Vector3D Add(const Vector3D* const left, const Vector3D* const right)
{
	Vector3D v;
	v.x = left->x + right->x;
	v.y = left->y + right->y;
	v.z = left->z + right->z;
	return v;
}
Vector3D Substract(const Vector3D* const left, const Vector3D* const right)
{
	Vector3D v;
	v.x = left->x - right->x;
	v.y = left->y - right->y;
	v.z = left->z - right->z;
	return v;
}
Vector3D Scale(const Vector3D* vect, const float scale)
{
	Vector3D v;
	v.x = vect->x * scale;
	v.y = vect->y * scale;
	v.z = vect->z * scale;
	return v;
}
float Dot(const Vector3D* const left, const Vector3D* const right)
{
	return (left->x * right->x) + (left->y * right->y);
}

Vector3D CrossLH(const Vector3D* const left, const Vector3D* const right)
{
	return CrossRH(right, left);
}

Vector3D CrossRH(const Vector3D* const left, const Vector3D* const right)
{
	Vector3D tempVect;
	tempVect.x = (left->y * right->z) - (left->z * right->y);
	tempVect.y = (left->z * right->x) - (left->x * right->z);
	tempVect.z = (left->x * right->y) - (left->y * right->x);
	return tempVect;
}

void MoveBy(const Vector3D* by, /*ES*/ Vector3D* toMove)
{
	Vector3D tempVector;
	tempVector = { toMove->x + by->x, toMove->y + by->y, toMove->z + by->z};
}
float Length(const Vector3D* vect)
{
	return sqrt(LengthSq(vect));
}
float LengthSq(const Vector3D* vect)
{
	return (vect->x * vect->x + vect->y * vect->y, vect->z * vect->z);
}
bool Normalize(const Vector3D* vect)
{
	float length = Length(vect);
	if (length != 0)
	{
		float x = vect->x / length;
		float y = vect->y / length;
		float z = vect->z / length;
	}
	return false;
}
void ScaleBy(Vector3D* vect, const float scale)
{
	Vector3D tempVector;
	tempVector = { vect->x * scale, vect->y * scale, vect->z * vect->z };
}
bool Equals(const Vector3D* const left, const Vector3D* const right)
{
	return fabs(left->x - right->x) < EPSILON
		&& fabs(left->y - right->y) < EPSILON
		&& fabs(left->z - right->z) < EPSILON;
}