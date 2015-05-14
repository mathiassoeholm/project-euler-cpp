// https://projecteuler.net/problem=6

#include <iostream>

int main()
{
	int sumOfSquares = 0;
	int sum = 0;

	for (int i = 1; i <= 100; ++i)
	{
		sumOfSquares += i*i;
		sum += i;
	}

	int squareOfSum = sum*sum;

	int diff = squareOfSum - sumOfSquares;

	std::cout << diff << std::endl;

	getchar();

	return 0;
}