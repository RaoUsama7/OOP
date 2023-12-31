#pragma once
class Sibling
{
	char* name;
	int age;

public:
	Sibling();
	Sibling(char*, int);
	void setName(char*);
	void setAge(int);
	char* getName();
	int getAge();
	~Sibling();
};

