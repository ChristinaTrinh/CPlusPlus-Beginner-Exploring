//Description: This program Checks if a number is a Whole number or not
//LAB: Is Whole number
//Course: CIT 120-T1
//Programmer: Christina Trinh
//Professor: Makhene
//Date: 2/23/21
#include <iostream>
using namespace std;

int main()
{
    float number;
    // Heading
    cout << "\t\t\t\t\tDescription: This program Checks if a number is a Whole number or not." << endl;
    cout << "\t\t\t\t\tLAB: Is Whole number" << endl; 
    cout << "\t\t\t\t\tCourse: CIT 120-T1"<< endl;
    cout << "\t\t\t\t\tProgrammer: Christina Trinh" << endl;
    cout << "\t\t\t\t\tProfessor: Makhene" << endl;
    cout << "\t\t\t\t\tDate: 2/23/21" << endl;

    cout << "Enter a number and I will tell you if it's a Whole number: ";
    cin >> number;
    cin.ignore();

    if (number == static_cast <int> (number))
    {
    cout << "Your number is a Whole number.\n" << "Press Enter to exit.";
    cin.get();
    }

    else 
    {
    cout << "Your number is not a Whole number.\n" << "Press Enter to exit.";
    cin.get();
    }
    return 0;
}