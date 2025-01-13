#include <iostream>
using namespace std;

void exchange(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n)
{ // Removed trailing comma
    for (int i = 0; i < n - 1; i++)
    { // Outer loop for passes
        for (int j = 0; j < n - i - 1; j++)
        { // Inner loop for comparisons
            if (arr[j] > arr[j + 1])
            {
                exchange(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Dynamically sized array
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sort the array using the bubbleSort function
    bubbleSort(arr, n);

    // Display the sorted array
    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}