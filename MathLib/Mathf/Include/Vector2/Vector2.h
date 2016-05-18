#pragma once
#include<math.h>

namespace MathF
{
	struct Vector2
	{
				
		Vector2(float x = 0.0F, float y = 0.0F);
		~Vector2();

		void Normalize();
		Vector2 GetNormalized() const;
		float GetMagnitude() const;
		float GetSqrMagnitude() const;
		float GetX() const;
		float GetY() const;
		float SetX(float x);
		float SetY(float y);

		Vector2 operator +(const Vector2 right) const;
		Vector2 operator +=(const Vector2 right);
		Vector2 operator -(const Vector2 right) const;
		Vector2 operator -=(const Vector2 right);
		Vector2 operator *(float value) const;
		Vector2 operator *=(float value);
		Vector2 operator /(float value) const;
		Vector2 operator /=(float value);
		bool operator ==(Vector2 rhs) const;
		bool operator !=(Vector2 rhs) const;
		Vector2 operator =(Vector2& value);

		static float Distance(const Vector2 left, const Vector2 right);
		static float DistanceSqrt(const Vector2 left, const Vector2 right);
		static float Dot(const Vector2 left, const Vector2 right);
	private:

		// member
		float x;
		float y;

		// normal
		float m_fNormalX;
		float m_fNormalY;

		//magnitude
		float m_fMagnitude;
		float m_fSqrMagnitude;

		void UpdateParam();

	public:
		/// <summary>
		/// 
		/// <para>
		/// Shorthand for writing Vector2(0, 0, 0).
		/// </para>
		/// 
		/// </summary>
		static const Vector2 zero;
		/// <summary>
		/// 
		/// <para>
		/// Shorthand for writing Vector2(1, 1, 1).
		/// </para>
		/// 
		/// </summary>
		static const Vector2 one;
	};

}