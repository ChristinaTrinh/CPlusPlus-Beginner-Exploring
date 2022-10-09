//Description: This program asks user for positive integer number.
//LAB: Is Positive Integer Number
//Course: CIT 120-T1
//Programmer: Christina Trinh
//Professor: Makhene
//Date: 2/25/21
#include <iostream>
using namespace std;

int main()
{
    // Heading
    cout << "\t\tDescription: This program asks user for positive integer number." << endl;
    cout << "\t\t\t\t\tLAB: Is Positive Integer Number" << endl; 
    cout << "\t\t\t\t\tCourse: CIT 120-T1"<< endl;
    cout << "\t\t\t\t\tProgrammer: Christina Trinh" << endl;
    cout << "\t\t\t\t\tProfessor: Makhene" << endl;
    cout << "\t\t\t\t\tDate: 2/25/21" << endl;

    float number;

    cout << "Enter a number and I will tell you if it is a positive integer or not: ";  
    cin >> number;
    cin.ignore();

    if(cin.fail())
    {
        cout << "This is not an invalid number! Do not accept characters or symbols!";
    }
    
    else if (number == static_cast<int>(number) && number >= 0)
    {
        cout << "Your number is a postive integer number! ";
    }
        
    else if (number == static_cast <int> (number) && number <= 0)
    {
    cout << "Invalid value. Accept positive number only! Press Enter to exit.";
    cin.get();
    }

    else if (number != static_cast <int> (number))
    {
        if ( number >= 0)
    {
        cout << "Invalid value. Accept integer number only! Press Enter to exit. ";
        cin.get();
    }
    
        else if (number <= 0)
        {
        cout << "Invalid value. Accept positive integer number only! Press Enter to exit. ";
        cin.get();
        }  
    }
    
    return 0;
}


