/* ---------------------------------------------------------
  Variables scope
  - Global variable
  - Local variable
--------------------------------------------------------- */

#include <iostream>
using namespace std;

int a = 100; // Global variable

int second()
{
  cout << a << " Coming form second function\n";
  // cout << b << " Coming form second function\n"; // identifier "b" is undefined
  return 0;
}

int main()
{
  int b = 200; // Local variable
  cout << a << " Coming form main function\n";
  cout << b << " Coming form main function\n";
  second();
  return 0;
}
