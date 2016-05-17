#pragma once
namespace MathF
{
	struct Vector3
	{
		float x;
		float y;
		float z;

		Vector3();
		Vector3(float x, float y, float z);
		~Vector3();

		Vector3 operator +(const Vector3 right) const;
		Vector3 operator +=(const Vector3 right);
		Vector3 operator -(const Vector3 right) const;
		Vector3 operator -=(const Vector3 right);
		Vector3 operator *(float value) const;
		Vector3 operator *=(float value);
		Vector3 operator /(float value) const;
		Vector3 operator /=(float value);
		

		static const Vector3 Zero;
		static const Vector3 One;
	};

}