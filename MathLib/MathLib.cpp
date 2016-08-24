// MathLib.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Vector3.h"
#include "MathfTool.h"

using namespace MathF;
using namespace std;
int main()
{
	Vector3 a = Vector3::one;
	Vector3 b = Vector3::zero;
	b = a - b;
	a = a / 10;
	Vector3 c = a *= 20;
	c.SetX(12);
	std::cout << a.GetX() << std::endl;
	std::cout << a.GetY() << std::endl;
	std::cout << a.GetZ() << std::endl;
	std::cout << b.GetX() << std::endl;
	std::cout << b.GetY() << std::endl;
	std::cout << b.GetZ() << std::endl;
	std::cout << c.GetX() << std::endl;

	a = a + b;

	if (Vector3::one == Vector3::one)
	{
		std::cout << "one equal one" << std::endl;
	}
	if (Vector3::one != Vector3::zero)
	{
		std::cout << "one do not equal zero" << std::endl;
	}
	std::cout << " normal " << a.GetNormalized().GetX()<< std::endl;
	std::cout << " normal " << a.GetNormalized().GetY() << std::endl;
	std::cout << " normal " << a.GetNormalized().GetZ() << std::endl;
	Vector3 m(0, 1, 1);
	std::cout << m.GetX() << m.GetY() << m.GetZ() << std::endl;
	std::cout << m.GetNormalized().GetX() << m.GetNormalized().GetY() << m.GetNormalized().GetZ() << std::endl;
	m *= 1.0f;
	std::cout << m.GetX() << m.GetY() << m.GetZ() << std::endl;
	std::cout << m.GetNormalized().GetX() << m.GetNormalized().GetY() << m.GetNormalized().GetZ() << std::endl;
	Vector3 tmpX = m.GetNormalized();

	std::cout << Vector3::Distance(a, b) << std::endl;
	m /= 0.0f;
	std::cout << m.GetMagnitude() << std::endl;
	
	int ps1 = 2;
	int psm = ps1 = 2;
	std::cout << ps1 << " " << psm << std::endl;

	float value1 = 0.13f;
	float value2 = 100.0f;

	int v = (int)(value1 * value2);
	float f = value1 * value2;
	int v2 = (int)f;
	if((int)(value1 * value2) == v2)
	{
		std::cout << "XXX" << std::endl;
	}
	std::cout<< v << std::endl;
	std::cout << f << std::endl;
	std::cout << v2 << std::endl;

	float afx = 0.123456f;
	cout << afx << endl;
	for (int i = 0; i < 10; ++i)
	{
		cout << MathF::MathfTool::FixFloat(afx, i) << endl;
	}
	system("pause");
	return 0;
}

