#include "Vector3.h"

namespace MathF
{
	const Vector3 Vector3::Zero = Vector3();
	const Vector3 Vector3::One = Vector3(1.0f, 1.0f, 1.0f);

	Vector3::Vector3()
	{
		this->x = 0.0f;
		this->y = 0.0f;
		this->z = 0.0f;
	}
	Vector3::Vector3(float x, float y, float z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	Vector3::~Vector3()
	{

	}
	Vector3 Vector3::operator*(float value) const
	{
		return Vector3(value*x, value*y, value*z);
	}
	Vector3 Vector3::operator/(float value) const
	{
		return Vector3(x/value, y / value, z / value);
	}
	Vector3 Vector3::operator+(const Vector3 right) const
	{
		return Vector3(x+right.x, y+right.y, z+right.z);
	}
	Vector3 Vector3::operator-(const Vector3 right) const
	{
		return Vector3(x-right.x, y-right.y, z-right.z);
	}
	Vector3 Vector3::operator+=(const Vector3 right)
	{
		*this =  Vector3(x + right.x, y + right.y, z + right.z);
		return *this;
	}
	Vector3 Vector3::operator-=(const Vector3 right)
	{
		*this =  Vector3(x - right.x, y - right.y, z - right.z);
		return *this;
	}
	Vector3 Vector3::operator*=(float value)
	{
		*this = Vector3(value*x, value*y, value*z);
		return *this;
	}
	Vector3 Vector3::operator/=(float value)
	{
		*this = Vector3(x / value, y / value, z / value);
		return *this;
	}




}







