/*This program prompts the user to enter their power factor, and
then computes the amount of voltage used to provide the amount of
power that the user needed.*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  /* Declaring the variables for the voltage source, voltage 
  from the outlet, the resistance, power and the power factor */  
  double Vs, Vt(120), R(10), P(260), pf;

  //Prompts the user to enter their power factor
  cout << "Please enter the power factor, pf: ";
  cin >> pf;

  // Calulates the voltage provided by the power company
  Vs = sqrt(pow(Vt + (2 * R * P) / Vt, 2) + pow((2 * R * P) / (pf * Vt), 2) * (1-(pf * pf)));

  //Prints the values that contribute to the voltage provided by the power company
  cout << "\nP = " << P << " W," << " R = " << R << " Ohms," << " and Vt = " << Vt << " Vrms\n\n";

  // Sets the decimal place for the voltage supplied by the power company to 2 decimal places
  cout.setf(ios::fixed);
  cout.precision(2);

  // Prints the value of the voltage provided by the power company
  cout << "Vs = " << Vs << " Vrms\n\n";

  // Allows the output window to remain on the screen
  system("pause");

  // Terminates the program
  return 0;
}