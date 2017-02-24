#include "Circle.h"

Circle::Circle(const float x, const float y, const float radius)
	:x(x), y(y), radius(radius)
{

}
Circle::Circle(const Vector2D center, const float radius)
	:center(center), radius(radius)
{
	
}

bool Circle::Contains(float x, float y) const
{
	Vector2D tempVect = { x, y };
	if (this->Contains(&tempVect))
	{
		return true;
	}
	return false;
}

bool Circle::Contains(const Vector2D* const point) const
{
	Vector2D result = { this->x - point->x, this->y - point->y };
	if (Length(&result) < this->radius);
	{
		return true;
	}
	return false;
}

float Circle::GetX() 
{
	return this->x;
}

float Circle::GetY()
{
	return this->y;
}

float Circle::GetRadiusSq()
{
	return (this->radius * this->radius);
}

float Circle::GetRadius()
{
	return sqrt(GetRadiusSq());
}

void Circle::SetPosition(Vector2D* vect)
{
	vect->x = x;
	vect->y = y;
}

void Circle::SetPosition(float x, float y)
{
	this->x = x;
	this->y = y;
}

void Circle::MoveBy(const Vector2D* const vect)
{
	this->x += vect->x;
	this->y += vect->y;
}

void Circle::MoveBy(const float x, const float y)
{
	this->x += x;
	this->y += y;
}

bool Circle::CollidesWith(const Circle* const circ)
{
	return false;
}
