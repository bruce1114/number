#include"ComplexNumber.h"
#include<iostream>
#include<cmath>
<<<<<<< HEAD
#include<iomanip>
=======
>>>>>>> 8e83ea9214ba7594532b2976b68eb9890e1c1a78
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
<<<<<<< HEAD
		cout<<real;
		if(fabs(virt-0.0)>exp) cout<<((virt>0.0)?"+":"")<<virt<<"i";
=======
		cout<<a;
		if(fabs(virt-0.0)>exp) cout<<"+"<<virt<<"i";
>>>>>>> 8e83ea9214ba7594532b2976b68eb9890e1c1a78
	}
	else if(fabs(virt-0.0)>exp) cout<<virt<<"i";
	else cout<<0;
}

<<<<<<< HEAD
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
=======
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
>>>>>>> 8e83ea9214ba7594532b2976b68eb9890e1c1a78
}
