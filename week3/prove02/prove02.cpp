/***********************************************************************
* Program:
*    Assignment 02, Digital Forensics
*    Brother Alvey, CS 165
* Author:
*    Kaden Payne
* Summary: 
*    This program will take a log and parse it for the correct timestamp.
*
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      
************************************************************************/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Record 
{
   string username;
   string fileName;
   long   timestamp;
};

/**********************************************************************
 * PROMPT FILE
 * prompt user for log file
 ***********************************************************************/
string promptFile()
{
   string fileName;
   cout << "Enter the access record file: ";
   cin >> fileName;

   return fileName;  
}

/**********************************************************************
 * READ FILE
 * read in the file provided by the user, store in array of Records
 ***********************************************************************/
void readFile(const string fileName)
{
   ifstream fin(fileName);
   if (fin.fail())
   {
      cout << "File: "
           << fileName
           << " was not read properly. Please try again.\n";
   }

   Record records[] = {};

   //loop into array
  {
     /* code */
  }
}

/**********************************************************************
 * PROMPT TIME
 * prompt user for 
 ***********************************************************************/
void promptTime()
{

}

/**********************************************************************
 * <MAIN DESCRIPTION HERE>
 ***********************************************************************/
int main()
{  
   return 0;

   //array of structs
   Record records[] = {};

}
