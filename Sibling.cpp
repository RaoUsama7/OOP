#include "Sibling.h"
#include<string>

Sibling::Sibling()
{
	this->name = " ";
	this->age = 0;
}

Sibling::Sibling(char* name, int age)
{
	int temSize = strlen(name);
	this->name = new char[temSize];
	for (int i = 0; i < temSize; i++)
	{
		this->name[i] = name[i];
	}
	this->age = age;
}
void Sibling::setName(char* name)
{
	int temSize = strlen(name);
	this->name = new char[temSize];
	for (int i = 0; i < temSize; i++)
	{
		this->name[i] = name[i];
	}
}
void Sibling::setAge(int age)
{
	this->age = age;
}
char* Sibling::getName()
{
	return this->name;
}
int Sibling::getAge()
{
	return this->age;
}

Sibling::~Sibling()
{
	delete[] name;
}
