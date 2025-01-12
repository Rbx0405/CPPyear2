#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter total number of students: ";
    cin >> num;

    // Dynamically allocate memory for storing GPA
    float *ptr = new float[num];

    // Input GPAs
    cout << "Enter GPA of students." << endl;
    for (int i = 0; i < num; ++i)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    // Display GPAs
    cout << "\nDisplaying GPA of students." << endl;
    for (int i = 0; i < num; ++i)
    {
        cout << "Student " << i + 1 << ": " << *(ptr + i) << endl;
    }

    // Free the allocated memory
    delete[] ptr;

    return 0;
}