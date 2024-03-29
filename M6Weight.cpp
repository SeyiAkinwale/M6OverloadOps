//Implementation file for the M6Weight class
#include "M6Weight.h"
#include <iostream>
#include <cmath>
using namespace std;

int Weight::objectCount = 0; //Definition and initialization
const int OZ_IN_LB  = 16; // ounces in a pound
const double KG_IN_OZ = .0283495; //kilos in an ounce

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

Weight::Weight(double totOunces)
{
	pound = 0; ounce = totOunces;
	fixWeight();
}

Weight::Weight(const Weight& aWeight)
{
	pound = aWeight.pound;
	ounce = aWeight.ounce;
	
}

Weight::~Weight()
{
	objectCount--;
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

Weight Weight::operator+ (const Weight& other) const
{
	Weight temp;
	temp.pound = other.pound + pound;
	temp.ounce = other.ounce + ounce;
	temp.fixWeight();
	return temp;
}

Weight Weight::operator- (const Weight& other) const
{
	Weight temp;
	temp.pound = other.pound - pound;
	temp.ounce = other.ounce - ounce;
	temp.fixWeight();
	return temp;
}

bool Weight::operator> (const Weight& aWeight)
{
	bool status;
	if (pound > aWeight.pound)
	{
		status = true;
	}
	else if ((pound > aWeight.pound) && (ounce > aWeight.ounce))
	{
		status = true;
	}
	else
	{
		status;
	}
	return status;
}

bool Weight::operator< (const Weight& aWeight)
{
	bool status;
	if (pound < aWeight.pound)
	{
		status = true;
	}
	else if ((pound < aWeight.pound) && (ounce < aWeight.ounce))
	{
		status = true;
	}
	else
	{
		status;
	}
	return status;
}

bool Weight::operator>= (const Weight& aWeight)
{
	bool status;
	if (pound >= aWeight.pound)
	{
		status = true;
	}
	else if ((pound >= aWeight.pound) && (ounce >= aWeight.ounce))
	{
		status = true;
	}
	else
	{
		status;
	}
	return status;
}

bool Weight::operator<= (const Weight& aWeight)
{
	bool status;
	if (pound <= aWeight.pound)
	{
		status = true;
	}
	else if ((pound <= aWeight.pound) && (ounce <= aWeight.ounce))
	{
		status = true;
	}
	else
	{
		status;
	}
	return status;
}

bool Weight::operator== (const Weight& aWeight)
{
	bool status;
	if ((pound == aWeight.pound) && (ounce <= aWeight.ounce))
	{
		status = true;
	}
	else
	{
		status;
	}
	return status;
}

bool Weight::operator!= (const Weight& aWeight)
{
	bool status;
	if ((pound != aWeight.pound) && (ounce != aWeight.ounce))
	{
		status = true;
	}
	else
	{
		status;
	}
	return status;
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

//Overloading <<
ostream& operator<< (ostream& out, const Weight& aWeight)
{
	out << aWeight.pound << " lbs " << aWeight.ounce<< "ozs";
	return out;
}

istream& operator>> (istream& in, Weight& aWeight)
{
	in >> aWeight.pound;
	cin.ignore();
	in >> aWeight.ounce;
	return in;
}

Weight::operator double() const
{
	return (pound * OZ_IN_LB + ounce) * KG_IN_OZ;
}