
#include <iostream>
#include <stdint.h>
#include <iomanip>
#include <string>

class Vector
{
private:
	double a = 0;
	double b = 0;
	double a1 = 1;
	double b1 = 1;
public:
	int La = 0, Lb = 0, LV = 0;
	Vector(double aa, double ab, double aa1, double ab1) : a(aa), b(ab), a1(aa1), b1(ab1)
	{}
		void Show()
		{
			std::cout << a << "." << b << '\n' << a1 << "." << b1 << '\n' << '\n';
		}
		void VLenght()
		{
			if (a < a1)
			{
				La = a1 - a;
			}
			else
			{ 
				La = a - a1;
			}
			if (b < b1)
			{
				Lb = b1 - b;
			}
			else
			{
				Lb = b - b1;
			}
			LV = sqrt(pow(La, 2) + pow(Lb, 2));
			std::cout << "The Vector lenght is: " << LV;
		}

};

int main()
{
	int aa, ab, aa1, ab1;
	std::cout << "Enter initial coordinates of vector, then press Enter" << '\n';
	std::cin >> aa >> ab;
	std::cout << '\n' << "Enter the final coordinates of vector, then press Enter" << '\n';
	std::cin >> aa1 >> ab1;
	std::cout << '\n' << "Good Job! Vector Coordinates is:" << '\n';
	Vector v(aa, ab, aa1, ab1);
	v.Show();
	v.VLenght();
}