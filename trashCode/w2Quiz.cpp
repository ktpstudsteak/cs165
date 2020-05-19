#include <iostream>
using namespace std;

struct Complex
{
    int real;
    string imaginary;
};

int main()
{
    //Create a variable of type Complex. 
    //Name it x and fill it with 5.2 + 36.1i
    Complex x;
    x.real = 5.2;
    x.imaginary = "36.1i";

    Complex y = x;

    if (x == y)
    {
        cout << "Yay. They're the same!\n";
    }
    
}