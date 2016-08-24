#include "Vector2.h"
#include "MathfTool.h"

namespace MathF
{
	//-----------------------public function-----------------------

	Vector2::Vector2(float x, float y)
	{
		this->x = x;
		this->y = y;
		UpdateParam();
	}
	Vector2::~Vector2()
	{

	}
	void Vector2::Normalize()
	{
		x /= m_fMagnitude;
		y /= m_fMagnitude;
	}
	Vector2 Vector2::GetNormalized() const
	{
		return Vector2(m_fNormalX,m_fNormalY);
	}
	float Vector2::GetMagnitude() const
	{
		return m_fMagnitude;
	}
	float Vector2::GetSqrMagnitude() const
	{
		return m_fSqrMagnitude;
	}

	float Vector2::GetX() const
	{
		return x;
	}
	float Vector2::GetY() const
	{
		return y;
	}
	float Vector2::SetX(float x)
	{
		this->x = x;
		UpdateParam();
		return x;
	}
	float Vector2::SetY(float y)
	{
		this->y = y;
		UpdateParam();
		return y;
	}
	Vector2 Vector2::operator*(float value) const
	{
		return Vector2(value*x, value*y);
	}
	Vector2 Vector2::operator/(float value) const
	{
		return Vector2(x/value, y / value);
	}
	Vector2 Vector2::operator+(const Vector2 right) const
	{
		return Vector2(x+right.x, y+right.y);
	}
	Vector2 Vector2::operator-(const Vector2 right) const
	{
		return Vector2(x-right.x, y-right.y);
	}
	Vector2 Vector2::operator+=(const Vector2 right)
	{
		*this =  Vector2(x + right.x, y + right.y);
		return *this;
	}
	Vector2 Vector2::operator-=(const Vector2 right)
	{
		*this =  Vector2(x - right.x, y - right.y);
		return *this;
	}
	Vector2 Vector2::operator*=(float value)
	{
		*this = Vector2(value*x, value*y);
		return *this;
	}
	Vector2 Vector2::operator/=(float value)
	{
		*this = Vector2(x / value, y / value);
		return *this;
	}
	bool Vector2::operator==( Vector2 rhs) const
	{		
		if (
			MathfTool::IsFloatEqual(x,rhs.x) &&
			MathfTool::IsFloatEqual(y, rhs.y) 
			)
		{
			return true;
		}
		return false;
	}
	bool Vector2::operator!=(Vector2 rhs) const
	{
		if (
			!MathfTool::IsFloatEqual(x, rhs.x) ||
			!MathfTool::IsFloatEqual(y, rhs.y) 
			)
		{
			return true;
		}
		return false;
	}

	Vector2 Vector2::operator=(Vector2& value)
	{
		x = value.x;
		y = value.y;

		UpdateParam();
		return *this;
	}
	//-----------------------system function-----------------------
	void Vector2::UpdateParam()
	{
		m_fSqrMagnitude = x*x + y*y ;
		m_fMagnitude = sqrtf(m_fSqrMagnitude);
		float tmp = 1.0f / m_fMagnitude;
		m_fNormalX = x * tmp;
		m_fNormalY = y * tmp;
	}
	//-----------------------static function-----------------------
	float Vector2::Distance(const Vector2 left, const Vector2 right)
	{
		float sqrtMag = (left.x - right.x)*(left.x - right.x) + (left.y - right.y)*(left.y - right.y);
		return sqrtf(sqrtMag);
	}
	float Vector2::DistanceSqrt(const Vector2 left, const Vector2 right)
	{
		float sqrtMag = (left.x - right.x)*(left.x - right.x) + (left.y - right.y)*(left.y - right.y);
		return sqrtMag;
	}
	float Vector2::Dot(const Vector2 left, const Vector2 right)
	{
		return left.x*right.x + left.y*right.y;
	}
	/// <summary>
	/// 
	/// <para>
	/// Shorthand for writing Vector2(0, 0, 0).
	/// </para>
	/// 
	/// </summary>
	const Vector2  Vector2::zero = Vector2();
	/// <summary>
	/// 
	/// <para>
	/// Shorthand for writing Vector2(1, 1, 1).
	/// </para>
	/// 
	/// </summary>
	const Vector2  Vector2::one = Vector2(1.0f, 1.0f);
	/// <summary>
	/// 
	/// <para>
	/// Shorthand for writing Vector2(0, 0, 1).
	/// </para>
	/// 
	/// </summary>


}