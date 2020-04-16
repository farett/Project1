#pragma once

namespace math
{

	class Vector2D
	{
	public:
		float myfirst;
		float mysecond;

		Vector2D(float first = 0.0f, float second = 0.0f) : myfirst(first), mysecond(second) {}
	};

	Vector2D operator+(const Vector2D& left, const Vector2D& right)
	{
		return Vector2D(left.myfirst + right.myfirst, left.mysecond + right.mysecond);
	}

	Vector2D operator*(float scalar, const Vector2D& vector)
	{
		return Vector2D(vector.myfirst * scalar, vector.mysecond * scalar);
	}

	Vector2D operator*(const Vector2D& vector, float scalar )
	{
		return Vector2D(vector.myfirst * scalar, vector.mysecond * scalar);
	}
	xxx
		yyy

}