#include <iostream>
using namespace std;

int main()
{
  char c1, c2, c3;
  int int1;
  cout << "Enter  5 letters: ";
  cin >> c1 >> c2 >> c3;
  cout << "ASCII message: " << int(c1) << ' ' << int(c2) << ' ' << int(c3);
  int1 = int(c1);
  cout << "\nfirst letter: " <<  char(int1) << endl;
}