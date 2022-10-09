//Description: This program finds the sum of positive numbers.
//LAB: do while Activity
//Course: CIT 120-T1
//Programmer: Christina Trinh
//Professor: Makhene
//Date: 03/04/21
#include <iostream>
using namespace std;

int main()
{
    // Banner
    cout << "\t\t\t\t\tDescription: This program finds the sum of positive numbers." << endl;
    cout << "\t\t\t\t\tLAB: do while Activity" << endl; 
    cout << "\t\t\t\t\tCourse: CIT 120-T1"<< endl;
    cout << "\t\t\t\t\tProgrammer: Christina Trinh" << endl;
    cout << "\t\t\t\t\tProfessor: Makhene" << endl;
    cout << "\t\t\t\t\tDate: 03/04/21" << endl;
    double number, sum = 0;
    double total;

    do {
        cout << "Enter positive number to find the sum. ";
     cin >> number;
     cin.ignore();
     if (number >=0)
     {
     sum += number;
     cout << "The sum is " << sum << ".\n";
     }
     else
     {
     cout << "Error! Enter positive number only.\n";
     }
    }
    while (number >= 0);
    
    cout << "Press ENTER to close program.";
    cin.get();

    return 0;
}