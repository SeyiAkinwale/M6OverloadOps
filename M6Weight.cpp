//Implementation file for the M6Weight class
#include "M6Weight.h"
#include <iostream>
#include <cmath>
using namespace std;

//Default Constructor initializes weight/ounce
Weight::Weight()
{
	pound = 0;
	ounce = 0; 
}

//Constructor with two arguments
Weight::Weight(int lbs, int oz)
{
	pound = lbs;
	ounce = oz;
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