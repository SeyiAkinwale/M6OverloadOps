//Specification for the Weight class  

#ifndef M6WEIGHT_H
#define M6WEIGHT_H

#include<iostream>
#include<string>
using namespace std;

//Weight class declaration
class Weight {
	friend ostream& operator<< (ostream&, const Weight&);
	friend istream& operator>> (istream&, Weight&);

	private:
		static int objectCount;
		int pound;
		double ounce;
		//Helper function
		void fixWeight();

	public:
		Weight();
		Weight(int, double);
		~Weight(); //destructor

		int getPounds();
		double getOunces();
		double getWeight(); //total weight in ounces
		void setPounds(int);
		void setOunces(double);
		void setWeight(int, double);
		static int getObjectCount();

		//Overloaded operators
		Weight operator+ (const Weight&) const;
		Weight operator- (const Weight&) const;
};

#endif