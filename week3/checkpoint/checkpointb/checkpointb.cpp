/***********************************************************************
 * Program:
 *    Checkpoint 03b, Errors
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

      if (!cin.fail())
      {
        break;  
      }
    
      if (cin.fail())
      {
         cin.clear();
        cin.ignore(256, '\n');
        cout << "Invalid input.\n";
       }

   } while (1);

  cout << "The number is "
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