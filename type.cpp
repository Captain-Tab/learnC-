#include <iostream>
using namespace std;

int main()
{
  int yearOfBirth = 1995;
  char gender = 'f';
  bool isOlderThan18 = true;
  float averageGrade = 4.5;
  double balance = 46331364;

  cout << "Size of int is" << sizeof(int) << " bytes\n";
  cout << "Size of bool is" << sizeof(bool) << " bytes\n";
  cout << "Size of char is" << sizeof(char) << " bytes\n";
  cout << "Size of float is" << sizeof(float) << " bytes\n";
  cout << "Size of double is" << sizeof(double) << " bytes\n";
  cout << "Int min values is" << INT_MIN << endl;
  cout << "Int max value is" << INT_MAX << endl;
  cout << "Size of unsigned int is " << sizeof(unsigned int) << "byts\n";
  cout << "UInt max value is" << UINT_MAX << endl;
}