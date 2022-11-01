//Specification for the Rational class  

#ifndef M6WEIGHT_H
#define M6WEIGHT_H

//Rational class declaration
class Rational {
private:
	int numerator;
	int denominator = 1; //not undefined Rational value when object created
	void setNonzeroDenom(int); //sets denominator to 1 if arg=0
	void reduceFrac(int&, int&);
public:
	Rational();
	Rational(int, int);
	void setNumerator(int);
	void setDenominator(int);
	void setRational(int, int); //sets numerator & denominator
	int getNumerator();
	int getDenominator();

	Rational add(const Rational&) const;
	Rational subtract(const Rational&) const;
	Rational multiply(const Rational&) const;
	Rational divide(const Rational&) const;

	void printRatioForm();
	void printFloatForm();
};

#endif