#include <iostream>
using namespace std;

// Function to swap two integers
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two floating-point numbers
void swap(float &x, float &y)
{
    float temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    float x, y;

    // For integers
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    // For floating-point numbers
    cout << "Enter two float numbers: ";
    cin >> x >> y;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}