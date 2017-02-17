#include "Vector2D.h"

Vector2D Add(const Vector2D* const left, const Vector2D* const right)
{
	Vector2D v;
	v.x = left->x + right->x;
	v.y = left->y + right->y;
	return v;
}

Vector2D Substract(const Vector2D* left, const Vector2D* right)
{
	Vector2D v;
	v.x = left->x - right->x;
	v.y = left->y - right->y;
	return v;
}

Vector2D Scale(const Vector2D* vect, const float scale)
{
	Vector2D v;
	v.x = vect->x * scale;
	v.y = vect->y * scale;
	return v;
}

void MoveBy(const Vector2D* by, const Vector2D* toMove)
{

}

float GetPolarAngleDeg(const Vector2D* vect)
{
	return 0.0f;
}

float AngleBetweenDeg(const Vector2D* left, const Vector2D* right)
{
	return 0.0f;
}

float Length(const Vector2D* vect)
{
	return 0.0f;
}

float LengthSq(const Vector2D* vect)
{
	return 0.0f;
}

bool Normalize(const Vector2D* vect)
{
	return false;
}

void ScaleBy(const Vector2D* vect, const float* scale)
{
}

Vector2D GetVectorByAngleDeg(const float* angle)
{
	return Vector2D();
}

bool Equals(const Vector2D* const  left, 
	const Vector2D* const right)
{
	return fabs(left->x - right->x) < EPSILON 
		&& fabs(left->y - right->y) < EPSILON;
}
