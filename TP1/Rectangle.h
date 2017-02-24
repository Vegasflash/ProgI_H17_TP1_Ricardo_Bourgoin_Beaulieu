#pragma once

#include "Vector2D.h"

class Rectangle {
public:
	Rectangle(float x, float y, float width, float height);
	Rectangle(Vector2D topLeft, Vector2D btmRight);
	bool Contains(float x, float y)const;
	bool Contains(const Vector2D* const point);
	float GetX() const;
	float GetY() const;
	float GetWidth();
	float GetHeight();
	void SetPosition(Vector2D* vect);
	void SetPosition(float x, float y);
	void MoveBy(Vector2D* vect);
	void MoveBy(float x, float y);
	bool CollidesWith(Rectangle* rect) const;

private:
	float x, y, width, height;
	Vector2D topLeft, btmRight;
};