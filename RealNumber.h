#ifndef REALNUMBER_H
#define REALNUMBER_H
#include"Number.h"

class RealNumber:public Number{
private:
  double val;
public:
  void print();
  RealNumber();
  RealNumber(double);
  RealNumber operator + (const RealNumber&);
  RealNumber operator * (const RealNumber&);
};

#endif
