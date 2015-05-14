// https://projecteuler.net/problem=7

#include <iostream>

bool isPrime(unsigned long long n)
{
	unsigned long long i = 2;

	unsigned long long d;

	do
	{
		d = n%i;
		i++;
	} while (d != 0 && n != i);

	return n == i;
}

int main()
{
	int primeCount = 1;

	for (unsigned long long i = 3; i < 1000000; i += 2)
	{
		if (isPrime(i))
		{
			++primeCount;

			if (primeCount == 10001)
			{
				std::cout << "Prime 10001: " << i << std::endl;

				break;
			}
		}
	}

	getchar();

	return 0;
}