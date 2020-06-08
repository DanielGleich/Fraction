#include "fraction.h"

Fraction::Fraction()
{
  num = 1;
  denum = 1;
}

Fraction::Fraction(int num, int denum)
{
  this->num = num;
  this->denum= denum;
}

int Fraction::getNum()
{
  return num;
}

int Fraction::getDenum()
{
  return denum;
}

void Fraction::setnum(int num)
{
  this->num = num;
}

void Fraction::setDenum(int denum)
{
  this->denum = denum != 0 ? denum : 1;
}

Fraction *Fraction::multiply(int numinator, int denuminator)
{
  this->num *= numinator;
  this->denum *= denuminator;
  return this;
}

Fraction *Fraction::multiply(Fraction fraction)
{
  return multiply(fraction.num,fraction.denum);
}

Fraction *Fraction::divide(int numinator, int denuminator)
{
  return this->multiply(denuminator,numinator);
}

Fraction *Fraction::divide(Fraction fraction)
{
  return this->divide(fraction.num,fraction.denum);
}

Fraction *Fraction::add(int numinator, int denuminator)
{
  if (this->denum != denuminator)
    {
      int temp = denuminator;
      numinator *= getDenum();
      denuminator *= getDenum();
      setnum(getNum()*temp);
      setDenum(getDenum()*temp);
    }
  this->num += numinator;
  return this;
}

Fraction *Fraction::add(Fraction fraction)
{
  return this->add(fraction.num,fraction.denum);
}

Fraction *Fraction::subtract(int numinator, int denuminator)
{
  return this->add(-numinator,denuminator);
}

Fraction *Fraction::subtract(Fraction fraction)
{
  return this->add(-fraction.num,fraction.denum);
}
