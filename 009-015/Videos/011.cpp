/* ---------------------------------------------------------
  Variables advanced knowledge
  - Declare variable without value + change later
  - Declare multiple variables without values + change later
  - Declare multiple variables with same value
--------------------------------------------------------- */

#include <iostream>
using namespace std;

int main()
{
  int a;
  a = 100;
  cout << a; // 100

  cout << "\n============================\n";

  int b, c, d;
  // b = 10, c = 20, d = 30; // Update values in one line
  // Update values in multiple lines
  b = 10;
  c = 20;
  d = 30;
  cout << b + c + d; // 60 => [10 + 20 + 30]

  cout << "\n============================\n";

  int e, f = 50, g;
  e = 40, g = 60;
  cout << e + f + g; // 150 => [40 + 50 + 60]

  cout << "\n============================\n";

  int h, i, j;
  h = i = j = 70;
  cout << h + i + j; // 210 [70 + 70 + 70]

  return 0;
}

