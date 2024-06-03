
#include <iostream>  
#include <algorithm> 
using namespace std;


class Animals
{
public:
	virtual string Voice()
	{
		string V = "Text";
		std::cout << V;
		return V;
	}
};
class Dog : public Animals
{
public:
	string Voice() override
	{
		string V = "Woof!\n";
		std::cout << V;
		return V;
	}
};
class Cat : public Animals
{
public:
	string Voice() override
	{
		string V = "Meow\n";
		std::cout << V;
		return V;
	}
};
class Cow : public Animals
{
public:
	string Voice() override
	{
		string V = "Mooo\n";
		std::cout << V;
		return V;
	}
};
class Racoon : public Animals
{
public:
	string Voice() override
	{
		string V = "FRFRFRFR\n";
		std::cout << V;
		return V;
	}
};
int main()
{
	Dog* dog = new Dog;
	Cat* cat = new Cat;
	Cow* cow = new Cow;
	Racoon* rac = new Racoon;
	dog->Voice();
	cat->Voice();
	cow->Voice();
	rac->Voice();
}
