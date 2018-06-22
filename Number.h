#ifndef ABSTRACTNUMBER_H
#define ABSTRACTNUMBER_H

class Number{
public:
  virtual void print();
  virtual Number operator + (const Number&);
  virtual Number operator * (const Number&);
};

#endif
