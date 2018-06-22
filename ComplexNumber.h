#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include"Number.h"
class ComplexNumber:public Number{
private:
	double real,virt;
public:
	ComplexNumber();
	ComplexNumber(double,double);
	void print();
<<<<<<< HEAD
	ComplexNumber operator + (const ComplexNumber&);
	ComplexNumber operator * (const ComplexNumber&);
=======
	ComplexNumber add(const ComplexNumber&);
	ComplexNumber mul(const ComplexNumber&);
>>>>>>> 8e83ea9214ba7594532b2976b68eb9890e1c1a78
};


#endif
