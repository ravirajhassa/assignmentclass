//1.Write a C++ program to swap value of two variables without using third variable
//[using   function].

#include"header.h"


// Function to swap without third variable
void swapValues(int& a, int& b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}


int swapbyfunc()
{
    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    swapValues(x, y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}