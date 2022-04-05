#include <iostream>
using namespace std;

int main()
{
  // User enters side lengths of a triangle(a, b, c)
  // Program sould write out whether that triangle is 
  // equilateral, isoscleles or scalene
  float a, b, c;
  cout << "a, b, c:";
  cin >> a >> b >> c;

  if(a == b && b == c)
    cout << "\nThis is Equailateral triangle" ;
  else{
    if(a != b && a != c && b != c) 
      cout << "\nThis is scalene triangle";
    else
      cout << "\nThis is isosceles triangle";
  }
  cout << "\nDone" << endl;
}
