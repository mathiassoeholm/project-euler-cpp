// https://projecteuler.net/problem=3

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
	unsigned long long n = 600851475143;

	unsigned long long i = 2;

	while (true)
	{
		if (n % i == 0 && isPrime(n/i))
		{
			std::cout << n / i << std::endl;

			break;
		}

		i++;
	}

	getchar();

	return 0;
}