//Description: This program reads the user's Full Name.
//LAB: Read Full Name and Greet
//Course: CIT 120-T1
//Programmer: Christina Trinh
//Professor: Makhene
//Date: 2/11/21

#include <iostream>
#include <string> 
using namespace std;

int main ()
{
    // Heading
    cout << "\t\t\t\t\tDescription: This program reads the user's Full Name." << endl;
    cout << "\t\t\t\t\tLAB: Read Full Name and Greet" << endl; 
    cout << "\t\t\t\t\tCourse: CIT 120-T1"<< endl;
    cout << "\t\t\t\t\tProgrammer: Christina Trinh" << endl;
    cout << "\t\t\t\t\tProfessor: Makhene" << endl;
    cout << "\t\t\t\t\tDate: 2/11/21" << endl;
    string name;

    cout << "Please Enter Full Name: ";
    getline(cin,name);
    cout << "Hello " << name << ".\n ";
    return 0;
}

