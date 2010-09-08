// Assignment 0
// Type your name here 
// Type today's date here 
// 
// This program calculates the amount of a radioactive substance 
// that remains after a specific time
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
   double init, halflife, time, residual;
// Get values for variables
   cout << "Enter initial amount, half-life, and time" << endl;
   cin >> init >> halflife >> time;
// Compute the residual amount for the given time
   residual = init*pow( 0.5, time/halflife);
// Display residual amount
   cout << "residual amount remaining = " << residual << endl;
   return 0;
}
