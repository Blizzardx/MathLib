#pragma once
#include<math.h>

namespace MathF
{
	struct Vector3
	{
				
		Vector3(float x = 0.0F, float y = 0.0F, float z = 0.0F);
		~Vector3();

		void Normalize();
		Vector3 GetNormalized() const;
		float GetMagnitude() const;
		float GetSqrMagnitude() const;
		float GetX() const;
		float GetY() const;
		float GetZ() const;
		float SetX(float x);
		float SetY(float y);
		float SetZ(float z);

		Vector3 operator +(const Vector3 right) const;
		Vector3 operator +=(const Vector3 right);
		Vector3 operator -(const Vector3 right) const;
		Vector3 operator -=(const Vector3 right);
		Vector3 operator *(float value) const;
		Vector3 operator *=(float value);
		Vector3 operator /(float value) const;
		Vector3 operator /=(float value);
		bool operator ==(Vector3 rhs) const;
		bool operator !=(Vector3 rhs) const;
		Vector3 operator =(Vector3& value);

	private:
		// member
		float x;
		float y;
		float z;

		// normal
		float m_fNormalX;
		float m_fNormalY;
		float m_fNormalZ;

		//magnitude
		float m_fMagnitude;
		float m_fSqrMagnitude;

		void UpdateParam();
		
	public:
		static float Distance(const Vector3 left, const Vector3 right);
		static float DistanceSqrt(const Vector3 left, const Vector3 right);
		static float Dot(const Vector3 left, const Vector3 right);
		static Vector3 Cross(const Vector3 left, const Vector3 right);
		
		/// <summary>
		/// 
		/// <para>
		/// Shorthand for writing Vector3(0, 0, 0).
		/// </para>
		/// 
		/// </summary>
		static const Vector3 zero;
		/// <summary>
		/// 
		/// <para>
		/// Shorthand for writing Vector3(1, 1, 1).
		/// </para>
		/// 
		/// </summary>
		static const Vector3 one;
		/// <summary>
		/// 
		/// <para>
		/// Shorthand for writing Vector3(0, 0, 1).
		/// </para>
		/// 
		/// </summary>
		static  const Vector3 forward;
		/// <summary>
		/// 
		/// <para>
		/// Shorthand for writing Vector3(0, 0, -1).
		/// </para>
		/// 
		/// </summary>
		static  const Vector3 back;
		/// <summary>
		/// 
		/// <para>
		/// Shorthand for writing Vector3(0, 1, 0).
		/// </para>
		/// 
		/// </summary>
		static  const Vector3 up;
		/// <summary>
		/// 
		/// <para>
		/// Shorthand for writing Vector3(0, -1, 0).
		/// </para>
		/// 
		/// </summary>
		static  const Vector3 down;
		/// <summary>
		/// 
		/// <para>
		/// Shorthand for writing Vector3(-1, 0, 0).
		/// </para>
		/// 
		/// </summary>
		static  const Vector3 left;
		/// <summary>
		/// 
		/// <para>
		/// Shorthand for writing Vector3(1, 0, 0).
		/// </para>
		/// 
		/// </summary>
		static  const Vector3 right;
	};

}