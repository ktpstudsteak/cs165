#include <iostream>
#include <cstring>
#include <cctype>
#include <vector>

using namespace std;


/*
Enter your DNA sequence: ATTCGACTGA
Enter the number of potential relatives: 3

Please enter the name of relative #1: Peter
Please enter the name of relative #2: James
Please enter the name of relative #3: John

Please enter the DNA sequence for Peter: TTTCGACTGA
Please enter the DNA sequence for James: AAACGTCAGT
Please enter the DNA sequence for John: ATTGCAGTCA

Percent match for Peter: 90%
Percent match for James: 50%
Percent match for John: 60%
*/




int main()
{
    string seqLetters;
    cout << "Enter your DNA sequence: ";
    cin  >> seqLetters;

    int relCount;
    cout << "Enter the number of potential relatives: ";
    cin >> relCount;

    string relNames[50] = {};

    //Test
    for (int i = 0; i < relCount; i++)
    {
        cout << "Enter relative name: ";
        cin  >> relNames[i];
    }
    
    string relDNA[50] = {};
    for (int i = 0; i < relCount; i++)
    {
        cout << "Enter relative " << i << "'s DNA Sequence: ";
        cin  >> relDNA[i];
        cout << endl;
    }


    cout << relDNA[1][1];
    

    return 0;
}