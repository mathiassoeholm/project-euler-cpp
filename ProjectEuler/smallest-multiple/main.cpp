// https://projecteuler.net/problem=5

#include <iostream>

int main()
{
	int i = 0;

	while (true)
	{
		i += 2520;

		bool isMultiple = true;

		for (int j = 2; j <= 20; ++j)
		{
			if (i % j != 0)
			{
				isMultiple = false;
				break;
			}
		}

		if (isMultiple)
		{
			break;
		}
	}

	std::cout << i << std::endl;

	getchar();

	return 0;
}