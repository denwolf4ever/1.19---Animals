
#include <iostream>
using namespace std;

class Animal 
{
public:
	virtual void Voice()
	{
		cout << "voice" << endl;
	}
	

private:

};
class Cat : public Animal
{
public:
	void Voice() override
	{
		cout << "Meow" << endl;
	}
private:
	
};
class Dog : public Animal
{
public:
	void Voice() override
	{
		cout << "Woof" << endl;
	}
private:

};
class Fox : public Animal
{
public:
	void Voice() override
	{
		cout << "Ring-ding-ding-ding-dingeringeding! Gering - ding - ding - ding - dingeringeding! Gering - ding - ding - ding - dingeringeding" << endl;
	}
private:

};



int main()
{
	Animal* arr = new Animal[8]
	{
		Cat(), Dog(), Fox(), Dog(), Fox(), Dog(), Cat(), Cat()
	};
	for (int i = 0; i < 8; i++)
	{
		arr[i].Voice();
	}
	Cat neko;
	neko.Voice();
	delete[] arr;
}

