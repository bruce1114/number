#ifndef INTEGERNUMBER_H
#define INTEGERNUMBER_H
#include"RealNumber.h"

class IntegerNumber:public RealNumber{
private:
  int val;
public:
  IntegerNumber();
  IntegerNumber(int);
  void print();
  IntegerNumber operator + (const IntegerNumber&);
  IntegerNumber operator * (const IntegerNumber&);
};

#endif
