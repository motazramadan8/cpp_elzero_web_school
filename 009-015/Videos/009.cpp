/* ---------------------------------------------
  Variables basic knowledge
  - Data container with unique name (Identifier)
  - Declare with value + change later

  Syntax
  - [DATA_TYPE] [VARIABLE_NAME] = [VARIABLE_VALUE]
--------------------------------------------- */

#include <iostream>
using namespace std;

int main()
{
  int price = 200;
  cout << "Price is: " << price;
  cout << "\nPrice after tax is: " << price + 15;
  cout << "\nPrice after adding 50 is: " << price + 50;
  price = 150;
  cout << "\nPrice after discount is: " << price;
  return 0;
}
