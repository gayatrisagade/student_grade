/*
Task: Student Grade Calculator

Description:
Create a program that calculates the
average grade of a student. Prompt the
user to enter the number of subjects,
and then input the grades for each
subject. Calculate the average grade and
display it to the user.
*/

//Program

#include <iostream>

using namespace std;

int main() {
    int numSubjects;

    // Get the number of subjects from the user
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    // Validate input
    if (numSubjects <= 0) {
        cout << "Please enter a positive number of subjects." << endl;
        return 1;
    }

    double totalGrade = 0;

    // Input grades for each subject
    for (int i = 1; i <= numSubjects; ++i) {
        double grade;
        cout << "Enter the grade for subject " << i << ": ";
        cin >> grade;

        // Validate input
        if (grade < 0 || grade > 100) {
            cout << "Invalid grade. Please enter a grade between 0 and 100." << endl;
            return 1;
        }

        totalGrade += grade;
    }

    // Calculate the average grade
    double averageGrade = totalGrade / numSubjects;

    // Display the average grade
    cout << "Average Grade: " << averageGrade << endl;
}


/*
Output:

Enter the number of subjects: 2
Enter the grade for subject 1: 90
Enter the grade for subject 2: 27
Average Grade: 58.5
*/