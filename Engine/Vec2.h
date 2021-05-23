#pragma once

class Vec2
{
public:
	float x;
	float y;
public:
	Vec2();
	Vec2(float x_in, float y_in);

	void Add(float x_in, float y_in);
	
	Vec2 operator+ (const Vec2& otherVec2);
	Vec2& operator+= (const Vec2& otherVec2);
	Vec2 operator- (const Vec2& otherVec2);
	Vec2 operator* (const Vec2& otherVec2);
	Vec2 operator* (float num);

	float Magnitude_sqr() const;
	float Magnitude() const;
	Vec2& Normalize();
};
