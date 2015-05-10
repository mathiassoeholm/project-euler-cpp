// https://projecteuler.net/problem=2

#include <iostream>

int main()
{
	int evenSum = 0;

	int a = 0;
	int b = 1;

	while (b < 4000000)
	{
		int f = b + a;
		a = b;
		b = f;

		if ((f & 1) == 0)
		{
			evenSum += f;
		}
	}

	std::cout << evenSum << std::endl;

	getchar();

	return 0;
}