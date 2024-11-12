#include <iostream>
using namespace std;
// Function to exchange (swap) two integers by reference
void exchange(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            // If the current element is greater than the next element, swap them
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
    // Ask the user for the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    // Ask the user to input the array elements
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