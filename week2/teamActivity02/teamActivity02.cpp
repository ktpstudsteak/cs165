/**********************************************************
 * Team Activity 02
 * Author: Kaden Payne
 ***********************************************************/
#include <iostream>
#include <string>

using namespace std;

struct Scripture
{
    string  bookName;
    int     chapter;
    int     verse;
};

void displayScipture(Scripture & scrip)
{
    cout << scrip.bookName
         << " "
         << scrip.chapter
         << ":"
         << scrip.verse;
}

int main()
{
    Scripture scrip;
    scrip.bookName = "Alma";
    scrip.chapter  = 31;
    scrip.verse    = 5;

    displayScipture(scrip);
    return 0;
}