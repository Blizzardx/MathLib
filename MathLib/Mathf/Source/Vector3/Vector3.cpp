#include "Vector3.h"
#include "MathfTool.h"

namespace MathF
{
	/// <summary>
	/// 
	/// <para>
	/// Shorthand for writing Vector3(0, 0, 0).
	/// </para>
	/// 
	/// </summary>
	const Vector3  Vector3::zero = Vector3();
	/// <summary>
	/// 
	/// <para>
	/// Shorthand for writing Vector3(1, 1, 1).
	/// </para>
	/// 
	/// </summary>
	const Vector3  Vector3::one = Vector3(1.0f, 1.0f, 1.0f);
	/// <summary>
	/// 
	/// <para>
	/// Shorthand for writing Vector3(0, 0, 1).
	/// </para>
	/// 
	/// </summary>
	const Vector3  Vector3::forward = Vector3(0.0f, 0.0f, 1.0f);
	/// <summary>
	/// 
	/// <para>
	/// Shorthand for writing Vector3(0, 0, -1).
	/// </para>
	/// 
	/// </summary>
	const Vector3  Vector3::back = Vector3(0.0f, 0.0f, -1.0f);
	/// <summary>
	/// 
	/// <para>
	/// Shorthand for writing Vector3(0, 1, 0).
	/// </para>
	/// 
	/// </summary>
	const Vector3  Vector3::up = Vector3(0.0f, 1.0f, 0.0f);
	/// <summary>
	/// 
	/// <para>
	/// Shorthand for writing Vector3(0, -1, 0).
	/// </para>
	/// 
	/// </summary>
	const Vector3  Vector3::down = Vector3(0.0f, -1.0f, 0.0f);
	/// <summary>
	/// 
	/// <para>
	/// Shorthand for writing Vector3(-1, 0, 0).
	/// </para>
	/// 
	/// </summary>
	const Vector3  Vector3::left = Vector3(-1.0f, 0.0f, 0.0f);
	/// <summary>
	/// 
	/// <para>
	/// Shorthand for writing Vector3(1, 0, 0).
	/// </para>
	/// 
	/// </summary>
	const Vector3  Vector3::right = Vector3(1.0f, 0.0f, 0.0f);

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
	float Vector3::GetMagnitude()
	{
		return 0.0f;
	}
	float Vector3::GetSqrMagnitude()
	{
		return 0.0f;
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
	bool Vector3::operator==( Vector3 rhs) const
	{		
		if (
			MathfTool::IsFloatEqual(x,rhs.x) &&
			MathfTool::IsFloatEqual(y, rhs.y) &&
			MathfTool::IsFloatEqual(z, rhs.z)
			)
		{
			return true;
		}
		return false;
	}
	bool Vector3::operator!=(Vector3 rhs) const
	{
		if (
			!MathfTool::IsFloatEqual(x, rhs.x) ||
			!MathfTool::IsFloatEqual(y, rhs.y) ||
			!MathfTool::IsFloatEqual(z, rhs.z)
			)
		{
			return true;
		}
		return false;
	}

	Vector3 Vector3::operator=(Vector3& value)
	{
		x = value.x;
		y = value.y;
		z = value.z;

		UpdateMagnitude();
		UpdatgeNormal();
		return *this;
	}

	void Vector3::UpdatgeNormal()
	{
	}

	void Vector3::UpdateMagnitude()
	{
	}

}







