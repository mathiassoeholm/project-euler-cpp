// https://projecteuler.net/problem=4

#include <iostream>

int getHighestPalindrome()
{
	for (int i = 999; i >= 1; --i)
	{
		// Isolate digits
		int x3 = i - ((i / 10)*10);
		int x1 = i / 100;
		int x2 = (i - x1 * 100 - x3) / 10;

		// Build palindrome
		int p = ((i * 10 + x3) * 10 + x2);
		if (i >= 100)
		{
			p = p * 10 + x1;
		}

		// Check all possible products, starting at the top
		for (int j = 999; j >= 100; --j)
		{
			for (int q = 999; q >= 100; --q)
			{
				if (j*q == p)
				{
					return p;
				}
			}
		}
	}

	return 0;
}

int main()
{
	std::cout << getHighestPalindrome();

	getchar();

	return 0;
}