#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
  Fraction Bruch1(1,2);
  Fraction Bruch2(2,2);

  cout << Bruch1.getNum() << endl;
  cout << Bruch1.getDenum() << endl << endl;

  Bruch1.divide(Bruch2);

  cout << Bruch1.getNum() << endl;
  cout << Bruch1.getDenum() << endl << endl;

  return 0;
}
