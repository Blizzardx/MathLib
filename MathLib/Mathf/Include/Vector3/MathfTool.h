#pragma once
namespace MathF
{
	static class MathfTool
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
	};
}