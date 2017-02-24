#pragma once

#include <math.h>
#include <typeinfo>
#include <cmath>

struct Vector2D 
{
	float x, y;
};

const float PI = 3.1415926535897f;
const double EPSILON = 0.0001;
const float RadToDeg = 180 / PI;

// Vector 2D
Vector2D Add(const Vector2D* const left, const Vector2D* const right);
Vector2D Substract(const Vector2D* const left, const Vector2D* const right);
Vector2D Scale(const Vector2D* vect, const float scale);
void MoveBy(const Vector2D* const by, /*ES*/ Vector2D* toMove);
float GetPolarAngleDeg(const Vector2D* vect);
float AngleBetweenDeg(const Vector2D* left, const Vector2D* right);
float Length(const Vector2D* vect);
float LengthSq(const Vector2D* vect);
bool Normalize(const Vector2D* vect);
void ScaleBy(Vector2D* vect, const float scale);
Vector2D GetVectorByAngleDeg(const float* angle);
bool Equals(const Vector2D* const  left, 
const Vector2D* const right);