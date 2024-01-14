#include <iostream>
using namespace std;

float Celsius2Fahrenheit(float Celsius)
{
  return Celsius * 1.8 + 32.0;
}

int main()
{
  float Celsius;
  float Fahrenheit;
  cout << "Please enter a Celsius value: ";
  cin >> Celsius;
  Fahrenheit = Celsius2Fahrenheit(Celsius);
  cout << Celsius << " degrees Celsius is " << Fahrenheit << " degrees Fahrenheit.";

  return 0;
}