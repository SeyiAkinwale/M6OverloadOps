//Implementation file for the M6Weight class
#include "M6Weight.h"
#include <iostream>
#include <cmath>
using namespace std;

const int OZ_IN_LB  = 16;// ounces in a pound

//Default Constructor initializes weight/ounce
Weight::Weight()
{
	pound = 0;
	ounce = 0; 
}

//Constructor with two arguments
Weight::Weight(int lbs, int oz):pound(lbs), ounce(oz)
{
}

// returns value of pound
int Weight::getPounds()
{
	return pound;
}

//returns value of ounce
int Weight::getOunces()
{
	return ounce;
}

//sum of pound variable in ounces and ounce
int Weight::getWeight()
{
	return pound * OZ_IN_LB + ounce;
}

void Weight::setPounds(int lbs)
{
	pound = lbs;
}

void Weight::setOunces(double oz)
{
	ounce = oz;
}

void Weight::setWeight(int lbs, double oz)
{
	pound = lbs;
	ounce = oz;
}

//Helper fucntion to fix Weight
void Weight::fixWeight()
{	//If they are negative, convert them to positive
	pound = abs(pound);
	ounce = abs(ounce);

	while (ounce > OZ_IN_LB)
	{
		if ((ounce - OZ_IN_LB) < OZ_IN_LB)
		{
			double overage = ounce - OZ_IN_LB;
			ounce = overage;
		}
		else
		{
			ounce -=OZ_IN_LB;
		}
		pound++;
	}
}