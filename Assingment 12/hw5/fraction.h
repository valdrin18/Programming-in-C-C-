// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

using namespace std;

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
                            // integers. Denominator by default is 1
	friend ostream& operator<<(ostream& o, const Fraction& fr);
	friend istream& operator>>(istream& i, Fraction& fr);
	Fraction operator/(Fraction&);
	Fraction operator*(Fraction&);
    Fraction operator+(Fraction&);
    Fraction operator-(Fraction&);
    Fraction operator=(Fraction&);
    inline bool operator>( Fraction& f1){ return this->num*f1.den > this->den*f1.num; }
    inline bool operator<(Fraction& f1){ return this->num*f1.den < this->den*f1.num; }
	void print();				// prints it to the screen
};


#endif /* FRACTION_H_ */
