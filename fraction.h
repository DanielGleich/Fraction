#ifndef FRACTION_H
#define FRACTION_H


class Fraction
{
  int num;
  int denum;

public:
  Fraction();

  Fraction(int num, int denum);

  int getNum();

  int getDenum();

  void setnum(int num);

  void setDenum( int denum );

  Fraction* multiply(int numerator, int denuminator);

  Fraction* multiply(Fraction fraction);

  Fraction* divide(int numerator, int denuminator);

  Fraction* divide(Fraction fraction);

  Fraction* add( int numerator, int denuminator);

  Fraction* add (Fraction fraction);

  Fraction* subtract(int numerator, int denuminator);

  Fraction* subtract(Fraction fraction);
};

#endif // FRACTION_H
