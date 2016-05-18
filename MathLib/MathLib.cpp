// MathLib.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Vector3.h"

using namespace MathF;

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
	system("pause");
	return 0;
}

