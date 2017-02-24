#include "Rectangle.h"

Rectangle::Rectangle(const float x, const float y, const float width, const float height)
	:x(x), y(y), width(width)
{

}

Rectangle::Rectangle(Vector2D topLeft, Vector2D btmRight)
	:topLeft(topLeft), btmRight(btmRight)
{

}

bool Rectangle::Contains(float x, float y) const
{
	if (this->x < x && this->x + this->width > x &&
		this->y > y && this->y - this->height < y)
	{
		return true;
	}
	return false;
}

bool Rectangle::Contains(const Vector2D* const point)
{
	if (Contains(point->x, point->y))
	{
		return true;
	}
	return false;
}

float Rectangle::GetX() const
{
	return this->x;
}

float Rectangle::GetY() const
{
	return this->y;
}

float Rectangle::GetWidth()
{
	return this->width;
}

float Rectangle::GetHeight()
{
	return this->height;
}

void Rectangle::SetPosition(Vector2D* vect)
{
	this->x = vect->x;
	this->y = vect->y;
}

void Rectangle::SetPosition(float x, float y)
{
	this->x = x;
	this->y = y;
}

void Rectangle::MoveBy(Vector2D* vect)
{
	this->x += vect->x;
	this->y += vect->y;
}

void Rectangle::MoveBy(float x, float y)
{
	this->x += x;
	this->y += y;
}

bool Rectangle::CollidesWith(Rectangle* rect) const
{
	if (this->Contains(rect->x, rect->y) ||
		this->Contains(rect->x + rect->width, rect->y) ||
		this->Contains(rect->x, rect->y - rect->width) ||
		this->Contains(rect->x + rect->width, rect->y - rect->height))
	{
		return true;
	}
	return false;
}

