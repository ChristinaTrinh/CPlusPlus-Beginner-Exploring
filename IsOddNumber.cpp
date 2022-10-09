//Description: This program tells the user if the number is odd or not
//LAB: Is Odd Number
//Course: CIT 120-T1
//Programmer: Christina Trinh
//Professor: Makhene
//Date: 2/16/21
#include <iostream>
using namespace std;

int main()
{
    // Heading
    cout << "\t\tDescription: This program tells the user if the number is odd or not." << endl;
    cout << "\t\t\t\t\tLAB: Is Odd Number" << endl; 
    cout << "\t\t\t\t\tCourse: CIT 120-T1"<< endl;
    cout << "\t\t\t\t\tProgrammer: Christina Trinh" << endl;
    cout << "\t\t\t\t\tProfessor: Makhene" << endl;
    cout << "\t\t\t\t\tDate: 2/16/21" << endl;
    // Declare variable
    int number;

    // Tells user to enter value
    cout << "Enter an integer: ";

    // Allows user to enter a value
    cin >> number;
    cin.ignore();

    // If the number divided by 2 and has a remainder equal to 1, it is an odd number
    if (number % 2 == 1)
    cout << number << " is odd.\n";

    // If the number divided by 2 and has a remainder equal to 0, it is an even number
    else
    cout << number << " is even.\n";

    // exit command
    cout << "Press Enter key to exit";
    cin.get();
    return 0;
}