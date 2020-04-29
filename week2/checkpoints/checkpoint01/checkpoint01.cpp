/***********************************************************************
* Program:
*    Week 2, Checkpoint 01 
*    Brother Alvey, CS 165
* Author:
*    Kaden Payne
* Summary: 
*    This program will prove competency of the ideas of structs.
*
*    Estimated:  0.75 hrs   
*    Actual:     1 hrs
*      
************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

/***********************************
 * USER
 * The information of the user
 **********************************/
struct User
{
    string fName;
    string lName;
    int    idNum;
};

/**********************************************************************
 * PROMPT
 * Prompt user for information
 ***********************************************************************/
void prompt(User & user)
{
    cout << "Please enter your first name: ";
    cin  >> user.fName;

    cout << "Please enter your last name: ";
    cin  >> user.lName;

    cout << "Please enter your id number: ";
    cin  >> user.idNum;
    cout << endl;
}

void display(const User & user)
{
    cout << "Your information:\n"
         << user.idNum
         << " - "
         << user.fName
         << " "
         << user.lName
         << endl;
}

/**********************************************************************
 * MAIN
 * Put everything together
 ***********************************************************************/
int main()
{
    User user;

    prompt(user);
    display(user);
   
   return 0;
}

