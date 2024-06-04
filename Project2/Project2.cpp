
#include <iostream>  
#include <algorithm> 
using namespace std;


class Animals
{
public:
	virtual string Voice()
	{
		std::cout << "Text";
		return "Text";
	}
};
class Dog : public Animals
{
public:
	string Voice() override
	{
		std::cout << "Woof!\n";
		return "Woof!\n";
	}
};
class Cat : public Animals
{
public:
	string Voice() override
	{
		std::cout << "Meow\n";
		return "Meow\n";
	}
};
class Cow : public Animals
{
public:
	string Voice() override
	{
		std::cout << "Mooo\n";
		return "Mooo\n";
	}
};
class Racoon : public Animals
{
public:
	string Voice() override
	{
		std::cout << "FRFRFRFR\n";
		return "FRFRFRFR\n";
	}
};
class Fox : public Animals
{
public:
	string Voice() override
	{
		int answ;
		std::cout << "Do you want to know, what does the Fox say? (yes - 1 /no - 0) - ";
			std::cin >> answ;
			if (answ == 1)
			{
				std::cout << "Tin din din din din din trin rin rin rin rin Rapapapapapau";
				return "Tin din din din din din trin rin rin rin rin Rapapapapapau";
			}
			else
			{
				std::cout << "Anyway Tin din din din din din trin rin rin rin rin Rapapapapapau";
				return "Anyway Tin din din din din din trin rin rin rin rin Rapapapapapau";
			}
	}
};
int main()
{
	const int arsize = 5;
	Animals* array[arsize];
	array[0] = new Dog();
	array[1] = new Cat();
	array[2] = new Cow();
	array[3] = new Racoon();
	array[4] = new Fox();
	for (int i = 0; i < arsize; ++i)
	{
		array[i]->Voice();
	}
	for (int i = 0; i < arsize; ++i) {
		delete array[i];
	}

	return 0;
}
