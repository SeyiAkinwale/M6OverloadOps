//Specification for the Weight class  

#ifndef M6WEIGHT_H
#define M6WEIGHT_H

//Weight class declaration
class Weight {
private:
	static int objectCount;
	int pound;
	double ounce;
	//Helper function
	void fixWeight();

public:
	Weight();
	Weight(int, double);

	int getPounds();
	double getOunces();
	double getWeight(); //total weight in ounces
	void setPounds(int);
	void setOunces(double);
	void setWeight(int, double);

};

#endif