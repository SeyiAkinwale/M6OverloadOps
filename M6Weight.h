//Specification for the Weight class  

#ifndef M6WEIGHT_H
#define M6WEIGHT_H

//Weight class declaration
class Weight {
private:
	int pound;
	double ounce;

public:
	Weight();
	Weight(int, int);

	int getPounds();
	int getOunces();
	int getWeight(); //total weight in ounces
	//setPounds();
	//setOunces();
	//setWeight();

};

#endif