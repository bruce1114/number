#include"ComplexNumber.h"
#include<iostream>
#include<cmath>
#include<iomanip>
#define exp 1e-8
using namespace std;

ComplexNumber::ComplexNumber()
{
	real=virt=0;
}

ComplexNumber::ComplexNumber(double a,double b)
{
	real=a,virt=b;
}

void ComplexNumber::print()
{
	if(fabs(real-0.0)>exp)
	{
		cout<<real;
		if(fabs(virt-0.0)>exp) cout<<((virt>0.0)?"+":"")<<virt<<"i";
	}
	else if(fabs(virt-0.0)>exp) cout<<virt<<"i";
	else cout<<0;
}

ComplexNumber ComplexNumber::operator + (const ComplexNumber& other)
{
	ComplexNumber temp(real+other.real,virt+other.virt);
	return temp;
}

ComplexNumber ComplexNumber::operator * (const ComplexNumber& other)
{
	double treal=real*other.real-virt*other.virt;
	double tvirt=real*other.virt+virt*other.real;
	ComplexNumber temp(treal,tvirt);
	return temp;
}
