//Description: This program calculate the factorial of user's input
//LAB: Factorial
//Course: CIT 120-T1
//Programmer: Christina Trinh
//Professor: Makhene
//Date: 4/1/21
#include <iostream>
using namespace std;

//prototype
void calculate(int);
int check();
int main()
{
    // Heading
    cout << "\t\t\t\t\tDescription: This program calculate the factorial of user's input." << endl;
    cout << "\t\t\t\t\tLAB: Factorial" << endl; 
    cout << "\t\t\t\t\tCourse: CIT 120-T1"<< endl;
    cout << "\t\t\t\t\tProgrammer: Christina Trinh" << endl;
    cout << "\t\t\t\t\tProfessor: Makhene" << endl;
    cout << "\t\t\t\t\tDate: 4/1/21" << endl;

    int number; // declare variable
    number = check(); //call the function check
    calculate(number); // call the function calculate to solve the factorial
    return 0;
}

 int check() //function check to validate
 {
     double num; // declare variable
    cout << "Please Enter a positive integer number and I will calculate its factorial: "; // tell user to enter 
    cin >> num; // get input
    cin.ignore();
    while(cin.fail()||num!=static_cast<int>(num)||num<0) // check valid and repeat
  { 
      if(cin.fail())
      {
          cout << "Please Enter a positive integer number: ";
          cin.clear();
          cin.ignore(1000, '\n');
          cin>>num;
      }
      else if (num!=static_cast<int>(num)||num<0)
      {
      cout << "Please Enter a positive integer number: ";
      cin >> num;}
  }
  return num;
 }

void calculate(int numberCalc) // the function header, parameter
{
    int count=1; // count for the number of time it's less than the number itself
    int result=1; // store the result each time it multiply by
    while(count < numberCalc) //this loop responsible for how many times and what will multiply 
    {
        ++count; //plus 1 first because result is already 1 so count need to be 2
        result= result*count; //store value after each multiplication in variable result
    }
    cout<< "The factorial of " << numberCalc << " is " << result; // Display the factorial
}
