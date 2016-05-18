#pragma once
namespace MathF
{
	class MathfTool
	{
	public:

		static bool IsFloatEqual(float l, float r)
		{
			float value = l - r;
			if (value >= -0.000001f && value <= 0.000001f)
			{
				return  true;
			}
			return false;
		}
		static float FixFloat(float value, int keepCount = 3)
		{
			if (value >= -0.000001f && value <= 0.000001f)
			{
				value = 0.0f;
			}
			return value;
		}
		static float InvSqrtf(float x)
		{
			float xhalf = 0.5f*x;
			int i = *(int*)&x;         // get bits for floating value
			i = 0x5f375a86 - (i >> 1); // hidden initial guess
			x = *(float*)&i;          // convert bits back to float
			x = x*(1.5f - xhalf*x*x); // Newton step, repeating increases accuracy
									  //    x = x*(1.5f-xhalf*x*x); // add this in for added precision, or many more...
			return x;
		}
		static double InvSqrt(double x)
		{
			double xhalf = 0.5f*x;
			long i = *(long*)&x;         // get bits for floating value
			i = 0x5fe6ec85e7de30da - (i >> 1); // hidden initial guess
			x = *(double*)&i;          // convert bits back to float
			x = x*(1.5f - xhalf*x*x); // Newton step, repeating increases accuracy
									  //    x = x*(1.5f-xhalf*x*x); // add this in for added precision, or many more...
			return x;
		}
		static float SafeCut(float value,float v)
		{
			
		}
	};
}