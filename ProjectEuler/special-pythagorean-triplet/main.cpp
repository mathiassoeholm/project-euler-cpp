// https://projecteuler.net/problem=9

#include <iostream>

int getProduct()
{
	for (int a = 1; a < 1000; a++)
	{
		for (int b = a + 1; b < 1000; b++)
		{
			auto c = 1000 - (a + b);

			

			if (a*a + b*b == c*c)
			{
				std::cout << a << std::endl;
				std::cout << b << std::endl;
				std::cout << c << std::endl;
				std::cout << " " << std::endl;

				return a * b * c;
			}
		}
	}

	return 0;
}

int main()
{
	std::cout << getProduct();

	getchar();

	return 0;
}

