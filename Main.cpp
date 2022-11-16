//Author: Seyi Akinwale
//Purpose: Using a class to represent overload operators
//Oct 14, 2022

#include <iostream>
#include <string>
#include <cmath>
#include "M6Weight.h"

using namespace std;

void testTypeOverload();
void testStreamOverload();

int main()
{

	testTypeOverload();
	cout << endl<< "Number of objects: " << Weight::getObjectCount();
	return 0;
}

void testTypeOverload()
{
	Weight middleWeight(2, 3.2);
	double convertedWeight = middleWeight;
	cout << endl << convertedWeight;
}
void testStreamOverload()
{
	Weight leftWeight;

	Weight middleWeight(2, 2);
	
	cout << "\nEnter a Weight: ";
	cin >> middleWeight;

	Weight rightWeight(200, 12);
	rightWeight.setPounds(-10);
	rightWeight.setOunces(100.5);

	leftWeight = middleWeight - rightWeight;
	cout << endl << leftWeight.getPounds();
	cout << " " << leftWeight.getOunces();
	cout << endl << rightWeight.getPounds();
	cout << " " << rightWeight.getOunces();
	cout << endl << rightWeight.getWeight();
	cout << endl << rightWeight;
}
