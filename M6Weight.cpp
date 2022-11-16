//Implementation file for the M6Weight class
#include "M6Weight.h"
#include <iostream>
#include <cmath>
using namespace std;

int Weight::objectCount = 0;
const int OZ_IN_LB  = 16;// ounces in a pound

//Default Constructor initializes weight/ounce
Weight::Weight()
{
	pound = 0;
	ounce = 0; 
	objectCount++;
}

//Constructor with two arguments
Weight::Weight(int lbs, double oz):pound(lbs), ounce(oz)
{
	fixWeight();
	objectCount++;
}

// returns value of pound
int Weight::getPounds()
{
	return pound;
}

//returns value of ounce
double Weight::getOunces()
{
	return ounce;
}

//sum of pound variable in ounces and ounce
double Weight::getWeight()
{
	return pound * OZ_IN_LB + ounce;
	//cout << "Number of objects: " << Weight::getObjectCount();
}

void Weight::setPounds(int lbs)
{
	pound = lbs;
	fixWeight();
}

void Weight::setOunces(double oz)
{
	ounce = oz;
	fixWeight();
}

void Weight::setWeight(int lbs, double oz)
{
	pound = lbs;
	ounce = oz;
	fixWeight();
}

//Helper function to fix Weight
void Weight::fixWeight()
{	//If they are negative, convert them to positive
	pound = abs(pound);
	ounce = abs(ounce);

	//subtract multiples of 16 oz and covert back onto lbs.
	while (ounce > OZ_IN_LB)
	{
		ounce -= OZ_IN_LB;
		pound++;
	}
}

int Weight::getObjectCount()
{
	return objectCount;
}