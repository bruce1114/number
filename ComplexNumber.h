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
	ComplexNumber add(const ComplexNumber&);
	ComplexNumber mul(const ComplexNumber&);
};


#endif
