/* ---------------------------------------------------------
  Constant variable
  - Read only value
  - Can't declare without value
--------------------------------------------------------- */

#include <iostream>
using namespace std;
#define DAYS 8

int main()
{
  int salary = 10000;
  const int num = 100;
  // num = 200; // expression must be a modifiable lvalue
  cout << num << "\n";
  cout << salary;

  // const int x; // const variable "x" requires an initializer

  cout << "\n" << DAYS;

  return 0;
}
