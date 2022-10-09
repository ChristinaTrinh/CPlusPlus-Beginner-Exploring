//Description: This program asks the user to enter a character and tell them if it is a vowel or not
//LAB: Vowels
//Course: CIT 120-T1
//Programmer: Christina Trinh
//Professor: Makhene
//Date: 2/23/21
#include <iostream>
using namespace std;

int main()
{
    // Heading
    cout << "\t\tDescription: This program asks the user to enter a character and tell them if it is a vowel or not." << endl;
    cout << "\t\t\t\t\tLAB: Vowels" << endl; 
    cout << "\t\t\t\t\tCourse: CIT 120-T1"<< endl;
    cout << "\t\t\t\t\tProgrammer: Christina Trinh" << endl;
    cout << "\t\t\t\t\tProfessor: Makhene" << endl;
    cout << "\t\t\t\t\tDate: 2/23/21" << endl;

    // Declare the char variable
    char ch;

    // Tell user to enter any character
    cout << "Enter a character and I will tell you if it is a vowel or not: ";

    // Get the input from the keyboard
    ch = cin.get();

    // Ignore the space from the buffer
    cin.ignore();

    // If the user enter a, or e, or i, or o, or u, or their capital
    if ((ch== 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')
         || (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
    {
    // Displays the character that the user entered and tell them if it is a vowel
    cout << "You entered " << ch << ". It is a vowel!\n";

    // Exit program
    cout << "Press enter to exit";

    // Get the Enter Key
    cin.get();
    }

    // If the user enters any other character
    else
    {

    // Displays the character that the user entered and tell them it is not a vowel
    cout << "You entered " << ch << ". It is not a vowel.\n";

    // Exit program
    cout << "Press enter to exit";

    // Get the Enter Key
    cin.get();
    }
    
    return 0;
}