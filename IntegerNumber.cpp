#include"IntegerNumber.h"
#include<iostream>
using namespace std;

IntegerNumber::IntegerNumber()
{
  val=0;
}

IntegerNumber::IntegerNumber(int other)
{
  val=other;
}

void IntegerNumber::print()
{
  cout<<val;
}

IntegerNumber IntegerNumber::operator + (const IntegerNumber& other)
{
  IntegerNumber temp(val+other.val);
  return temp;
}

IntegerNumber IntegerNumber::operator * (const IntegerNumber& other)
{ 
  IntegerNumber temp(val*other.val);
  return temp;
}
