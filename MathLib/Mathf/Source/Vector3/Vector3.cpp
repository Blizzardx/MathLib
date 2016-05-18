#include "Vector3.h"
#include "MathfTool.h"

namespace MathF
{
	//-----------------------public function-----------------------
	Vector3::Vector3(float x, float y, float z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
		UpdateParam();
	}
	Vector3::~Vector3()
	{

	}
	void Vector3::Normalize()
	{
		x /= m_fMagnitude;
		y /= m_fMagnitude;
		z /= m_fMagnitude;
	}
	Vector3 Vector3::GetNormalized() const
	{
		return Vector3(m_fNormalX,m_fNormalY,m_fNormalZ);
	}
	float Vector3::GetMagnitude() const
	{
		return m_fMagnitude;
	}
	float Vector3::GetSqrMagnitude() const
	{
		return m_fSqrMagnitude;
	}
	float Vector3::GetX() const
	{
		return x;
	}
	float Vector3::GetY() const
	{
		return y;
	}
	float Vector3::GetZ() const
	{
		return z;
	}
	float Vector3::SetX(float x)
	{
		this->x = x;
		UpdateParam();
		return x;
	}
	float Vector3::SetY(float y)
	{
		this->y = y;
		UpdateParam();
		return y;
	}
	float Vector3::SetZ(float z)
	{
		this->z = z;
		UpdateParam();
		return z;
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

		UpdateParam();
		return *this;
	}
	//-----------------------system function-----------------------
	void Vector3::UpdateParam()
	{
		m_fSqrMagnitude = x*x + y*y + z*z;
		m_fMagnitude = sqrtf(m_fSqrMagnitude);
		float tmp = 1.0f / m_fMagnitude;
		m_fNormalX = x * tmp;
		m_fNormalY = y * tmp;
		m_fNormalZ = z * tmp;
	}
	//-----------------------static function-----------------------
	float Vector3::Distance(const Vector3 left, const Vector3 right)
	{
		float sqrtMag = (left.x - right.x)*(left.x - right.x) + (left.y - right.y)*(left.y - right.y) + (left.z - right.z)*(left.z - right.z);
		return sqrtf(sqrtMag);
	}
	float Vector3::DistanceSqrt(const Vector3 left, const Vector3 right)
	{
		float sqrtMag = (left.x - right.x)*(left.x - right.x) + (left.y - right.y)*(left.y - right.y) + (left.z - right.z)*(left.z - right.z);
		return sqrtMag;
	}
	float Vector3::Dot(const Vector3 left, const Vector3 right)
	{
		return left.x*right.x + left.y*right.y + left.z*right.z;
	}
	Vector3 Vector3::Cross(const Vector3 left, const Vector3 right)
	{
		return Vector3(left.y*right.z - right.y*left.z, left.z*right.x - right.z*left.x, left.x*right.y - left.x*right.y);		
	}
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

}







