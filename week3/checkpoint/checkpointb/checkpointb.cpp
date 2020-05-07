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
void prompt()
 {
   int num;
   do
   {
     cout << "Enter a number: ";
     cin >> num;

     

      if (cin.fail())
      {
         cin.clear();
        cin.ignore(256, '\n');
        cout << "Invalid input.\n";

        cout << "Enter a number: ";
        cin >> num;
        cout << endl;
       }

      if (!cin.fail())
      {
        break;  
      }
    
   } while (1);

  cout << "The number is: "
  << num
  << ".\n";
 } 

/**********************************************************************
 *MAIN
 *this uses the other functions
 ***********************************************************************/
int main()
{
  prompt();
  return 0;
}