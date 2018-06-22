#include"RealNumber.h"
#include"IntegerNumber.h"
#include"ComplexNumber.h"
#include<iostream>
using namespace std;
int main()
{
	cout<<"RealNumber:"<<endl;
	RealNumber a(1.1),b(2.2);
	cout<<"a,b: ";
	a.print();
	cout<<" ";
	b.print();
	cout<<endl;
	cout<<"a+b=";
	(a+b).print();
	cout<<endl<<"a*b=";
	(a*b).print();
	cout<<endl<<"IntegerNumber:"<<endl;
	IntegerNumber c(7),d(8);
	cout<<"c,d: ";
	c.print();
	cout<<" ";
	d.print();
	cout<<endl<<"c+d=";
	(c+d).print();
	cout<<endl<<"c*d=";
	(c*d).print();
	cout<<endl<<"ComplexNumber:"<<endl;
	ComplexNumber e(1,2),f(-1,3);
	cout<<"e,f: ";
	e.print();
	cout<<" ";
	f.print();
	cout<<endl<<"e+f=";
	(e+f).print();
	cout<<endl<<"e*f=";
	(e*f).print();
	cout<<endl;
}
