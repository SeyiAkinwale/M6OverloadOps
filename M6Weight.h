//Specification for the Weight class  

#ifndef M6WEIGHT_H
#define M6WEIGHT_H

//Weight class declaration
class Weight {
private:
	int pound;
	double ounce;
	//Helper function
	void fixWeight();

public:
	Weight();
	Weight(int, int);

	int getPounds();
	int getOunces();
	int getWeight(); //total weight in ounces
	void setPounds(int);
	void setOunces(double);
	void setWeight(int, double);

};

#endif