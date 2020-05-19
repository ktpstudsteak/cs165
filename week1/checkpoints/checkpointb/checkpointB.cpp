/***********************************************************************
* Program:
*    Checkpoint 01b, basic
*    Brother Alvey, CS165
* Author:
*   Kaden Payne
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

int getSize();
void getList(int[], int);
void displayMultiples(int[], int);


//Show "Hello World" on screen
int main() 
{
    
    /*                                                               ____________     
    *                                                              <     Y3ET     >
    *                                                              <  ___________ > 
    *                                                                     '
    * Create size and array within main because I can't use pointers yet. \\0              :)
    *                                                                       |
    *                                                                      / \
    */                                                                     

    int size = getSize();
    int list[size] = {};  

    getList(list, size);
    displayMultiples(list, size);

}

int getSize()
{
    int size = 0;
    cout << "Enter the size of the list: ";
    cin  >> size;

    return size;
}

void getList(int list[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number for index " << i << ": ";
        cin  >> list[i];      
    }   
    cout << endl;
}

void displayMultiples(int list[], int size)
{
    cout << "The following are divisible by 3:\n";
    for (int i = 0; i < size; i++)
    {
        if ((list[i] % 3) == 0)
        {
            cout << list[i] << endl;
        }
        
    }
    
}