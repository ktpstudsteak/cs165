/***********************************************************************
* Program:
*    Checkpoint 02b, Complex Numbers
*    Brother Alvey, CS165
* Author:
*    Kaden Payne
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

// TODO: Define your Complex struct here
struct Complex
{
   double real;
   double imaginary;
};

// TODO: Add your prompt function here
Complex prompt(Complex & number)
{
   cout << "Real: ";
   cin  >> number.real;

   cout << "Imaginary: ";
   cin  >> number.imaginary;

   return number;
}

// TODO: Add your display function here
void display(const Complex & sum)
{  
   cout  << "The sum is: "
         << sum.real
         << " + "
         << sum.imaginary
         << "i";
}
/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 ***********************************************************************/
Complex addComplex(const Complex & x, const Complex & y)
{
   // TODO: Fill in the body of the add function
   Complex sum;

   sum.real = (x.real + y.real);
   sum.imaginary = (x.imaginary + y.imaginary);

   return sum;
}


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare two Complex objects, c1 and c2
   Complex c1, c2;

   // Call your prompt function twice to fill in c1, and c2 
   prompt(c1);
   prompt(c2);

   cout << endl;

   // Declare another Complex for the sum
   Complex sum;

   // Call the addComplex function, putting the result in sum;
   sum = addComplex(c1, c2);
   
   display(sum);
   cout << endl;
 
   return 0;
}


