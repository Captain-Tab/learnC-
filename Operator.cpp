#include <iostream>
using namespace std;

int main()
{
  //+, -, *, /, %
  cout << 5 + 2 << endl;
  cout << 5.0 / 2.0 << endl;
  cout << 5 % 2 << endl;

  // ++, --
  int counter = 7;
  counter++;
  cout << counter << endl;
  counter--;
  cout << counter << endl;

  int counter2 = 7;
  cout << counter2++ << endl; // increment after assgin vaule
  cout << ++counter2 << endl; // increment first, then assgin value

  // <, >, <=, >=, ==, !=
  int a = 5, b = 6;
  cout << (a != b) << endl;

  // &&, ||, !
  cout << (a == 5 && b == 6) << endl;
  cout << (a == 5 || b == 6) << endl;
  cout << !(a == 5) << endl;

  // =, +=, -=, *=, %=
  int x1 = 5;
  x1 += 7;
  cout << x1 << endl;
  x1 -= 2;
  cout << x1 << endl;
}
