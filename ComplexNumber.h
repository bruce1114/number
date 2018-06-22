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
	ComplexNumber operator + (const ComplexNumber&);
	ComplexNumber operator * (const ComplexNumber&);
};

#endif
