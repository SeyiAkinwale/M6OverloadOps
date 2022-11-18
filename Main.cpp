//Author: Seyi Akinwale
//Purpose: Using a class to represent overload operators
//Oct 14, 2022

#include <iostream>
#include <string>
#include <cmath>
#include "M6Weight.h"

using namespace std;

//void testComparisonOverload()
void testTypeOverload();
void testStreamOverload();

int main()
{

	//testComparisonOverload();
	cout << endl<< "Number of objects: " << Weight::getObjectCount();
	return 0;
}

void testTypeOverload()
{
	Weight middleWeight(4, 6.4);
	double convertedWeight = middleWeight;
	cout << endl << convertedWeight;
	Weight funWeight = convertedWeight;
	cout << "Fun Weight" << funWeight;
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
