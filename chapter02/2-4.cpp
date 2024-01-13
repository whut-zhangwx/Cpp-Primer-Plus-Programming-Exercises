#include <iostream>
using namespace std;

int main()
{
  int ages;
  cout << "Input your age: ";
  cin >> ages;
  int months = ages*12;
  cout << "Your age in months is " << months;
  return 0;
}