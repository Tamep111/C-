
#include <iostream>
#include <stdint.h>
#include <iomanip>
#include <string>

int main()
{
	const int N = 150;
	bool p;
	std::cout << "select Even = 0, Odd = 1" << '\n';
	std::cin >> p;
	std::cout << '\n';

	for (int i = 0; i <= N; i++)
	{
		if (i % 2 == p)
			std::cout << i << '\n';
	}
}