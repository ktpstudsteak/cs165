#include <iostream>
using namespace std;

//Show "Hello World" on screen
int main() 
{
    char fName[256];
    int age;

    cout << "Hello CS 165 World\n";
    
    cout << "What is your first name?: ";
    cin  >> fName;
    cout << endl;

    cout << "What is your age?: ";
    cin  >> age;
    cout << endl;
    
    cout << "Your name is " << fName << ". You are " << age << " years old.\n";

}
