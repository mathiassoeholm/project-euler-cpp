// https://projecteuler.net/problem=10

#include <iostream>
#include <vector>


int main()
{
	const int upperLimit = 2000000;

	auto allNumbers = std::vector<int>(upperLimit);
	unsigned long long sum = 0;

	for (int i = 0; i < upperLimit; i++)
	{
		allNumbers[i] = i;
	}

	for (int i = 2; i < upperLimit; i++)
	{
		if (allNumbers[i] != 0)
		{
			sum += i;

			for (int j = i + i; j < upperLimit; j += i)
			{
				allNumbers[j] = 0;
			}
		}
	}
	
	std::cout << sum << std::endl;

	getchar();

	return 0;
}

