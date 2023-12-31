#include "SiblingsRecord.h"
#include<iostream>
using namespace std;


SiblingsRecord::SiblingsRecord(Sibling* s, int size)
{
	this->arr = new Sibling[size];
	this->size = size;
	for (int i = 0; i < size; i++)
	{
		this->arr[i].setName = s[i].getName();
		this->arr[i].setAge = s[i].getAge();
	}
	this->eldest = 0;
	this->youngest = 0;

}
void SiblingsRecord::findEldest()
{
	this->eldest = this->arr[0].getAge();
	for (int i = 1; i < size; i++)
	{
		if (this->eldest <= this->arr[i].getAge())
		{
			this->eldest = this->arr[i].getAge();
		}
	}
}
void SiblingsRecord::findYoungest()
{
	this->youngest = this->arr[0].getAge();
	for (int i = 1; i < size; i++)
	{
		if (this->youngest >= this->arr[i].getAge())
		{
			this->eldest = this->arr[i].getAge();
		}
	}
}
void SiblingsRecord::displayEldest()
{
	for (int i = 0; i < size; i++)
	{
		if (this->eldest == this->arr[i].getAge())
		{
			cout << "The Eldest Sibiling is:: " << this->arr[i].getName() << "having age" << this->arr[i].getAge()<< endl;
		}
	}
}
void SiblingsRecord::displayYoungest()
{
	for (int i = 0; i < size; i++)
	{
		if (this->youngest == this->arr[i].getAge())
		{
			cout << "The Youngest Sibiling is:: " << this->arr[i].getName() << "having age" << this->arr[i].getAge ()<< endl;
		}
	}
}

SiblingsRecord::~SiblingsRecord()
{
	delete[] arr;
}
