//Author: Seyi Akinwale
//Purpose: Using a class to represent overload operators
//Oct 14, 2022

#include <iostream>
#include <string>
#include <cmath>
#include "M6Weight.h"

using namespace std;

int main()
{
	Weight leftWeight;
	Weight rightWeight(2, 2);
	rightWeight.setPounds(10);
	rightWeight.setOunces(100);
	//rightWeight.setWeight(100,32);
	cout << endl << leftWeight.getPounds();
	cout << " " << leftWeight.getOunces();
	cout << endl << rightWeight.getPounds();
	cout << " " << rightWeight.getOunces();
	cout << endl << rightWeight.getWeight();


	return 0;
}