// Chairs kills.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct student
{
	int age;
	int IDnum;
	char year;
};

int main()
{
	student aj;
	student Student[100];
	Student[0] = aj;

	aj.age = 900;
	aj.IDnum = 90522034;
	aj.year = 'x';

	cout << aj.age << endl;


    return 0;
}

