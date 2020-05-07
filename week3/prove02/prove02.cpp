/***********************************************************************
 * Program:
 *    Assignment 03, Error Handling
 *    Brother Alvey, CS 165
 * Author:
 *    Kaden Payne
 * Summary: 
 *    This program will ask for a number and return it.
 *
 *    Estimated:  0.75 hrs   
 *    Actual:     0.20 hrs
 *      
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

/**********************************************************************
 *PROMPT
 *prompt user for number and check to see if valid
 ***********************************************************************/
int prompt() {
  int number;
  cout << "Enter a number: ";
  cin >> number;
  //te

  {
    try {
      if (number < 0) {

        throw string("The number cannot be negative.");
      }
      if (number > 100) {
        throw string("The number cannot be greater than 100.");

      }
      if (number % 2 != 0)
        throw string("The number cannot be odd.");

      else {
        cout << "The number is " << number << "." << endl;

      }
    } catch (const string message) {
      cout << "Error: " << message << endl;
    }

  }

  return number;
}

/**********************************************************************
 *MAIN
 *this uses the other functions
 ***********************************************************************/
int main() {
  prompt();
  return 0;
} 