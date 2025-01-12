#include <iostream>
#include <string>
using namespace std;

class STUDENT
{
    int rollNumber;
    string name;
    string subjectName;
    int marks;

public:
    void inputData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore(); // Ignore newline left in the input buffer
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Subject Name: ";
        getline(cin, subjectName);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData() const
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Subject: " << subjectName << endl;
        cout << "Marks: " << marks << endl;
    }

    int getRollNumber() const
    {
        return rollNumber;
    }
};

int main()
{
    STUDENT students[3];

    // Input data for 3 students
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].inputData();
        cout << endl;
    }

    // Display all student data
    cout << "Displaying results of all students:" << endl;
    for (int i = 0; i < 3; i++)
    {
        students[i].displayData();
        cout << "--------------------------" << endl;
    }

    // Search for a student by roll number
    int searchRoll;
    cout << "Enter the roll number of the student to search: ";
    cin >> searchRoll;

    bool found = false;
    for (int i = 0; i < 3; i++)
    {
        if (students[i].getRollNumber() == searchRoll)
        {
            cout << "Details of student with roll number " << searchRoll << ":" << endl;
            students[i].displayData();
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student with roll number " << searchRoll << " not found." << endl;
    }

    return 0;
}