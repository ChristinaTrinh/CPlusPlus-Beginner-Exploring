//Description: This program solves for arrays.
//LAB: Array Manipulation
//Course: CIT 120-T1
//Programmer: Christina Trinh
//Professor: Makhene
//Date: 4/13/21
#include <iostream>
using namespace std;

int banner();//prototype
bool validate(int);//prototype
void add(int [], int [], int);//prototype
void subtract(int val1[],int val2[], int quant);//prototype
void multiply(int val1[], int val2[], int quant);//prototype
const int quantity=7; //constant size of the array
int values1[quantity]={0, 1, 2, 3, 4, 5, 6}; //array 1
int values2[quantity]={20, 15, 10, 5, 0, 2, 4}; //array 2
int main()
{
    int CHOICE; //variable
    bool result; //variable
   
    CHOICE=banner(); //the value returned from function banner is assigned to CHOICE
    result=validate(CHOICE); //pass CHOICE as an argument to validate function and return a value and assigned to result
    if(!result) //if the choice is invalid
    exit(0); // exit program
    else //if the choice is valid
    {
        if(CHOICE==1) //if the user chose 1
        add(values1, values2, quantity); //call function add
        else if(CHOICE==2) //if the user chose 2
        subtract(values1, values2, quantity); //call subtract
        else if(CHOICE ==3) //if the user chose 3
        multiply(values1, values2, quantity); //call multiply
        cout << "Thank you!"; //end of program
        return 0;
    }
}
int banner() //the introduction, menu and banner
{
    //Heading
    cout << "\t\t\t\t\tDescription: This program solves for arrays." << endl;
    cout << "\t\t\t\t\tLAB: Array Manipulation" << endl; 
    cout << "\t\t\t\t\tCourse: CIT 120-T1"<< endl;
    cout << "\t\t\t\t\tProgrammer: Christina Trinh" << endl;
    cout << "\t\t\t\t\tProfessor: Makhene" << endl;
    cout << "\t\t\t\t\tDate: 4/13/21" << endl;

    int choice; //local variable choice
    cout<< "\tThe values for First array: "; //display message for first array
for(int count=0; count <quantity; count++) // while it's still less than the array's size
{
    cout <<values1[count] << " "; // display value from array's elements
}
cout << endl; 
cout <<"\tThe values for Second array: ";//display message for second array
for(int count=0; count <quantity; count++) //while it's still less than the array's size
{
    cout << values2[count]<<" ";//display value from array's elements
}
cout << endl;

//menu
cout << "\t\t\t***Our menu for today***\n";
cout << "1. Add array\n";
cout << "2. Subtract array\n";
cout << "3. Multiply Array\n";
cout << "Please select a choice from the above: ";
cin >> choice; //get choice
return choice; //return to main function
}

bool validate(int select) //validate function
{
    bool valid; //local variable
    //if the choice is not 1,2, or 3, or characters, or double value entered then the error message displays
    if(select <1 || select >3||cin.fail()||select!=static_cast<int>(select))
    {
        valid= false;
        cout << "The choice is invalid. Program exited."; //error message
        return valid; //return false bool to main function
    }
    else 
    {
        valid=true; 
        return valid; //return true bool to main function
    }
}

void add(int val1[], int val2[], int quant) //add function
{
    int sum; //local variable
    cout << "Result: "; 
    for(int count=0; count <quant; count++) //call all of the elements in the arrays
    {
        sum=val1[count]+val2[count]; //plus
        cout << sum << " "; //displays result
    }
}
void subtract(int val1[],int val2[], int quant) //suntract function
{
    int solution; //local variable
    cout <<"Result: ";
    for(int count=0; count<quant; count++) //call the elements in the arrays
    {
        solution=val1[count]-val2[count]; //subtract two array
        cout <<solution << " "; //displays result
    }
}

void multiply(int val1[], int val2[], int quant) // multiply function
{
    int solution; //local variable
    cout <<"Result: ";
    for(int count=0; count<quant; count++) //call the values from arrays' elements
    {
        solution=val1[count]*val2[count]; //multiplies them
        cout <<solution << " "; //then displays the solution
    }
}
