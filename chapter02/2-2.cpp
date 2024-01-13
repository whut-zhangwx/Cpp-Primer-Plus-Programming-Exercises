#include <iostream>
using namespace std;

int main()
{
  int furlongs;
  cout << "Input a distance in furlongs: ";
  cin >> furlongs;
  int yards = furlongs * 220;
  cout << furlongs << " (furlongs) = " 
  << yards << " (yards)" << endl;
  return 0;
}