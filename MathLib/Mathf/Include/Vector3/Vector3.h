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

		Vector3 GetNormalized();
		float GetMagnitude();
		float GetSqrMagnitude();

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
		// normal
		float m_fNormalX;
		float m_fNormalY;
		float m_fNormalZ;

		//magnitude
		float m_fMagnitude;
		float m_fSqrMagnitude;

		void UpdatgeNormal();
		void UpdateMagnitude();

	public:
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
		/// Shorthand for writing Vector3(1, 1, 1).
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