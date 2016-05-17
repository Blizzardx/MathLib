// MathLib.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Vector3.h"

using namespace MathF;

int main()
{
	Vector3 a = Vector3::One;
	Vector3 b = Vector3::Zero;
	b = a-b;
	a = a / 10;
	Vector3 c = a *= 20;
	c.x = 12;
	std::cout << a.x << std::endl;
	std::cout << a.y << std::endl;
	std::cout << a.z << std::endl;
	std::cout << b.x << std::endl;
	std::cout << b.y << std::endl;
	std::cout << b.z << std::endl;
	std::cout << c.x << std::endl;

	system("pause");
    return 0;
}

