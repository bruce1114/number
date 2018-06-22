#include"RealNumber.h"
#include<iostream>
using namespace std;

void RealNumber::print()
{
  cout<<val;
}

RealNumber::RealNumber()
{
  val=0;
}

RealNumber::RealNumber(double d)
{
  val=d;
}

RealNumber RealNumber::operator + (const RealNumber& other)
{
  RealNumber temp(val+other.val);
  return temp;
}

RealNumber RealNumber::operator * (const RealNumber& other)
{
  RealNumber temp(val*other.val);
  return temp;
}
