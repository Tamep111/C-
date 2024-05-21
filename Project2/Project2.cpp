
#include <iostream>
#include <stdint.h>
#include <iomanip>
#include <string>
#include <time.h>


int main()
{
	const int size = 5;
	int i = 0;
	int j = 0;
	int array[size][size] =
	{
		{(i)+(j),(i)+(++j), (i)+(++j),(i)+(++j),(i)+(++j)},
		{(++i) + (j = 0),(i)+(++j), (i)+(++j),(i)+(++j), (i)+(++j)},
		{(++i) + (j = 0),(i)+(++j), (i)+(++j),(i)+(++j), (i)+(++j)},
		{(++i) + (j = 0),(i)+(++j), (i)+(++j),(i)+(++j), (i)+(++j)},
		{(++i) + (j = 0),(i)+(++j), (i)+(++j),(i)+(++j), (i)+(++j)}
	};

	for (int a = 0; a < size; a++)
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << array[a][i] << " ";
		}
		std::cout << '\n';
	}
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);
	
	int summ = 0;
	int ind = buf.tm_mday % size;
	for (j = 0; j < size; j++)
	{
		summ = summ + array[ind][j];
	}
	std::cout << summ;
}