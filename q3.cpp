#include<iostream>
#include "Sibling.h"
#include "SiblingsRecord.h"
using namespace std;

int main()
{
	int size = 0;
	char* temp = new char[10];
	int tem = 0;
	cout << "Enter how Many Siblings you have\n";
	cin >> size;
	Sibling* S1 = new Sibling[size];
	cout << "Enter the particulars of each sibling: \n";
	for (int i = 0; i < size; i++)
	{
		cout << "Please enter the particulars of Sibling:" << i+1;
		cout << "Name::";
		cin >> temp;
		S1[i].setName(temp);
		cout << "\nAge::";
		cin.ignore();
		cin >> tem;
		S1[i].setAge(tem);
	}
	SiblingsRecord s(S1, size);
	s.findEldest();
	s.findYoungest();
	s.displayEldest();
	s.findYoungest();

}