#include <math.h>
#include "Vec2.h"

Vec2::Vec2()
{
	x = 0.0f;
	y = 0.0f;
}

Vec2::Vec2(float x_in, float y_in)
{
	x = x_in;
	y = y_in;
}

void Vec2::Add(float x_in, float y_in)
{
	x += x_in;
	y += y_in;
}

Vec2 Vec2::operator+(const Vec2& otherVec2)
{
	return Vec2(x + otherVec2.x, y + otherVec2.y);
}

Vec2& Vec2::operator+= (const Vec2& otherVec2)
{
	x = x + otherVec2.x;
	y = y + otherVec2.y;
	return *this;
}

Vec2 Vec2::operator-(const Vec2& otherVec2)
{
	return Vec2(x - otherVec2.x, y - otherVec2.y);
}

Vec2 Vec2::operator* (const Vec2& otherVec2)
{
	return Vec2(x * otherVec2.x, y * otherVec2.y);
}

Vec2 Vec2::operator* (float num)
{
	return Vec2(x * num, y * num);
}

float Vec2::Magnitude_sqr() const
{
	return x * x + y * y;
}

float Vec2::Magnitude() const
{
	return sqrt(Magnitude_sqr());
}

Vec2& Vec2::Normalize()
{
	float len = Magnitude();
	return *this * (1 / len);
}


