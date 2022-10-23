#include <iostream>

using namespace std;

int main() {

  float fahr, celsius;

  cout << "\n\t Insert Fahrenheit: ";
  cin >> fahr;

  celsius = (5.0 * (fahr - 32)) / 9.0;

  cout << "\n\t " << fahr << "F is equal to " << celsius << "C." << endl;

  return 0;
}
