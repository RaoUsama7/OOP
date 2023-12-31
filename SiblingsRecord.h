#pragma once
#include "Sibling.h"
class SiblingsRecord
{
	int size;
	Sibling* arr;
	int eldest;
	int youngest;
public:
	SiblingsRecord(Sibling*,int);
	void findEldest();
	void findYoungest();
	void displayEldest();
	void displayYoungest();
	~SiblingsRecord();
};

