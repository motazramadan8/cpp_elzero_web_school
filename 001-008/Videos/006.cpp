/* -------------------------------------------------------------
-- 1. processing (Ex. preprocessor to include iostream library)
-- 2. Creating translation unit
-- 3. Compiler translate source file (app.cpp) to object file
-- 4. Linker that link all objects to create .exe file
------------------------------------------------------------- */

#include <iostream> // iostream extension is .h => header file

int main()
{
  std::cout << "Line 1\n";
  std::cout << "Line 2\n";
  std::cout << "Line 3\n";
  return 0;
}