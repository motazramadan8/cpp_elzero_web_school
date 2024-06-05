/* -----------------------------
  Calculate Your Age Application
----------------------------- */

#include <iostream>
using namespace std;

int main()
{
  cout << "====================================\n";
  cout << "== Calculate your age application ==\n";
  cout << "====================================\n";

  int age;
  cin >> age;

  int age_in_days = age * 365;
  int age_in_hours = age_in_days * 24;
  int age_in_minutes = age_in_hours * 60;

  cout << "Days: " << age_in_days<< " Day"
      << "\nHours: " << age_in_hours << " Hour"
      << "\nMinutes: " << age_in_minutes << " Minute";
  return 0;
}