// drg-ClassMiles.cpp : Defines the entry point for the console application.
// By: David Garza
// Date: 20200211
// Description: To convert miles to kilometers and then kilometers to miles.

#include <stdafx.h>
#include <iostream>

int main()
{
   std::cout << "Hello World!\n";

   // Stage 2: Variables
   float fltMiles = 0.0;
   float fltKilometers = 0.0;
   float fltResult = 0.0;
   float fltKilResult = 0.0;

   // Stage 4: Input
   std::cout << "\nPlease enter the amount of miles to convert into kilometers: ";
   std::cin >> fltMiles;

   // Stage 3: Processing
   fltResult = fltMiles * 1.6;

   // Stage 1: Output
   std::cout << "\nYour converted kilometers are: " << fltResult;
 
   // Stage 4: Input
   std::cout << "\nPlease enter the amount of kilometers to convert into miles: ";
   std::cin >> fltKilometers;

   // Stage 3: Processing
   fltKilResult = fltKilometers * 0.62;

   // Stage 1: Output
   std::cout << "\nYour converted miles are: " << fltKilResult;
}
