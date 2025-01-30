#include <iostream>
using namespace std;

void fibonacciIterative(int n)
{
    int a = 0, b = 1, c;
    cout << "Fibonacci Sequence: ";
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    fibonacciIterative(n);
    return 0;
}