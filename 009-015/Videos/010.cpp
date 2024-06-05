/* ------------------------------------------------------
  Variables naming rules & best practice
  - Naming rules
  -- Must be unique
  -- Case sensitive (int price = 200 !== int Price = 400)
  -- Can't starts with numbers
  -- Nums or letters or underscores
  -- Not white space or special characters
  -- Reserved keywords "Class, Public"

  Best practice
  -- Related names
  -- Writing style
------------------------------------------------------ */

#include <iostream>
using namespace std;

int main()
{
  int price = 100; // Declare a new variable
  price = 200; // Update the value
  // int price = 400; // Will appear an error
  int Price = 400; // Will not appear an error because language in insensitive
  cout << price;
  cout << "\n============================\n";
  // int 1num = 10; // Will appear an error: expected an identifier
  int nu1m1 = 10; // Will not appear an error
  cout << nu1m1;
  cout << "\n============================\n";
  int _num_bers_ = 100;
  cout << _num_bers_;
  cout << "\n============================\n";
  // int num bers = 100; // Will appear an error: whitespace
  // int _num_#@!bers_ = 100; // Will appear an error: special characters
  // int class = 100; // Will not appear an error: invalid combination of type specifiers (Reserved words)

  // Writing styles
  // elzeroWebSchool => camelCase
  // ElzeroWebSchool => PascalCase
  // elzero_web_school => snake_case
  // ELZERO_WEB_SCHOOL => STREAMING_SNAKE_CASE

  return 0;
}