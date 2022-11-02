//Implementation file for the M6Weight class
#include "M6Weight.h"
#include <iostream>
#include <cmath>
using namespace std;

const int MULTIPLIER = 16;// ounces in a pound

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

//sum of pound variable in ounces and ounce
int Weight::getWeight()
{
	return pound * MULTIPLIER + ounce;
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