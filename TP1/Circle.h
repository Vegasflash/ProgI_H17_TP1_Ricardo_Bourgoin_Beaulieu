#pragma once

#include "Vector2D.h"

class Circle {
public:
	Circle(const float x, const float y, const float radius);
	Circle(const Vector2D center, const float radius);

	bool Contains(float x, float y) const;
	bool Contains(const Vector2D* const point) const;
	float GetX();
	float GetY();
	float GetRadiusSq();
	float GetRadius();
	void SetPosition(Vector2D* vect);
	void SetPosition(float x, float y);
	void MoveBy(const Vector2D* const vect);
	void MoveBy(const float x, const float y);
	bool CollidesWith(const Circle* const circ);

private:
	float x, y, radius;
	Vector2D center;
};
