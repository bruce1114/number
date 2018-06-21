#include"ComplexNumber.h"
#include<iostream>
#include<cmath>
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
		cout<<a;
		if(fabs(virt-0.0)>exp) cout<<"+"<<virt<<"i";
	}
	else if(fabs(virt-0.0)>exp) cout<<virt<<"i";
	else cout<<0;
}

ComplexNumber ComplexNumber::add(const ComplexNumber& other)
{
	real+=other.real;
	virt+=other.virt;
	return (*this);
}

ComplexNumber ComplexNumber::mul(const ComplexNumber& other)
{
	double temp=real;
	real=real*other.real-virt*other.virt;
	virt=temp*other.virt+virt*other.real;
	return (*this);
}
