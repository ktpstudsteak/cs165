/***********************************************************************
* Program:
*    Checkpoint 01a, review
*    Brother Alvey, CS165
* Author:
*   Kaden Payne
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

//Show "Hello World" on screen
int main() 
{
    char fName[256];
    int age;

    cout << "Hello CS 165 World!\n"; 
    
    cout << "Please enter your first name: ";
    cin  >> fName;
    //cout << endl;

    cout << "Please enter your age: ";
    cin  >> age;
    cout << endl;
    
    cout << "Hello " << fName << ", you are " << age << " years old.\n";

}