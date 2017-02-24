#include "Vector2D.h"

Vector2D Add(const Vector2D* const left, const Vector2D* const right)
{
	Vector2D v;
	v.x = left->x + right->x;
	v.y = left->y + right->y;
	return v;
}

Vector2D Substract(const Vector2D* const left, const Vector2D* right)
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

void MoveBy(const Vector2D* const by, Vector2D* toMove)
{ 
	toMove->x += by->x;
	toMove->y += by->y;
}

float GetPolarAngleDeg(const Vector2D* vect)
{
	float result = RadToDeg * atan2f(vect->y , vect->x);
	if (result == 0)
		{
			return result;
		}
	return result;
}

float AngleBetweenDeg(const Vector2D* left, const Vector2D* right)
{
	float fullRotation = 360.0f;
	Vector2D tempVector = { (left->x - right->x), (left->y - right->y) };

	float angleResult = GetPolarAngleDeg(&tempVector);
	return angleResult;
}

float Length(const Vector2D* vect)
{
	return sqrt(LengthSq(vect));
}

float LengthSq(const Vector2D* vect)
{
	return (vect->x * vect->x + vect->y * vect->y);
}

bool Normalize(const Vector2D* vect)
{
	float length = Length(vect);
	if (length != 0)
	{
		int x = vect->x / length;
		int y = vect->y / length;
	}
	return false;
}

void ScaleBy(Vector2D* vect, const float scale)
{
	Vector2D tempVector;
	tempVector = { vect->x * scale, vect->y * scale };
}

Vector2D GetVectorByAngleDeg(const float* angle)
{
	Vector2D tempVector;
	float newResult;
	 newResult = GetPolarAngleDeg(&tempVector);
	return Vector2D();
}

bool Equals(const Vector2D* const  left, 
	const Vector2D* const right)
{
	return fabs(left->x - right->x) < EPSILON 
		&& fabs(left->y - right->y) < EPSILON;
}
