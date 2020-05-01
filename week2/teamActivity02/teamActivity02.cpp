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
         << scrip.verse
         << endl;
}

Scripture promptScripture()
{
    Scripture scrip;

    cout << "What Book is it in: ";
    cin >> scrip.bookName;

    cout << "Chapter: ";
    cin >> scrip.chapter;

    cout << "Verse: ";
    cin >> scrip.verse;

    return scrip;
}


int main()
{
    Scripture scrip;
    scrip.bookName = "Alma";
    scrip.chapter  = 31;
    scrip.verse    = 5;

    displayScipture(scrip);

    cout << endl;

    Scripture s2 = promptScripture();

    cout << endl;

    displayScipture(s2);

    return 0;
}