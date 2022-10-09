// Description: This program asks user to enter a choice and use array to solve.
//LAB: Array Lab
//Course: CIT 120-T1
//Team C-Programmers: Christina, Nafissa, Francois, Charlie
//Professor: Makhene
//Date: 4/22/21
#include<iostream>
#include <fstream>
using namespace std;

//prototypes
void banner ();
void storeIn(int[][5], int);
int menu();
void choice1(int, int[][5], int);
void choice2(int, int[][5], int);
void choice3(int, int[][5], int);
bool validate(int);

int main()
{
    banner(); // call banner function
    int array[4][5]; //declare array
   storeIn(array,4); //call function storeIn to save date from file to the array 2 dimensions
   int select=menu(); //call menu function and store in select variable
   if(validate(select)) //call validate function to validate input
   {
       if(select==1) //if input =1
       choice1(select, array, 4); //call choice1 function(pass input, array)
       else if (select==2) //if input =2
       choice2(select, array, 4); //call choice2 function(pass input, array)
       else if(select==3) //if input =3
       choice3(select, array, 4); //call choice3 function(pass input, array)
   }
   return 0;
}

void banner () //banner function
{
 cout <<"\t\tDescription: This program demonstrates how to use functions."<< endl 
      << "\t\t\t\t\t LAB: Functions" << endl
      <<"\t\t\t\t\tCourse: CIT 120-T1" << endl 
      <<"\t\t\tTeam C - Programmers: Christina, Nafissa, Francois, Charlie" << endl
      <<"\t\t\t\t\tProfessor: Makhene" << endl << "\t\t\t\t\t  Date: 4/7/21" 
      <<endl <<endl;
}

//menu function 
int menu()
{
    int choice;
    cout << "\t\tMenu\n";
    cout << "1. View all students' records\n";
    cout << "2. View a student's records by ID\n";
    cout << "3. Show the highest and the lowest final scores\n";
    cout << "Select a choice: "; //ask user for input
    cin >> choice; //get input 
    return choice; //return input to main function
}

// storeIn function to save data in file into array 2 dimensional
void storeIn(int arr[][5], int row)
{
    ifstream inputFile; 
    int data;
    inputFile.open("studentgrade.txt"); //open file
    
    if(inputFile) //if the file is sucessfully open
    {
        //read data to array
      for(int r=0; r<row; r++) 
      {
          for(int c=0; c<5; c++)
      {
      inputFile >>data;
      arr[r][c]=data;
      }
      }
    }
    else //if the file isn't exist
    cout<<"Open file failed"; //error message
    inputFile.close(); //close file
}

bool validate(int choice) //validate function
{
    //if the choice is 1 or 2 or 3 then return true
    if(choice==1) 
    return true;
    else if(choice ==2)
    return true;
    else if(choice==3)
    return true;

    //if the choice isn't in the menu then exit program
    else
    {
    cout << "Invalid choice. Program exited.";
    exit(0);
    }
}

void choice1(int select, int arr[][5], int row)//option 1 function
{
    //create a well table 
        cout <<"-------------------------------------------------------------------------\n";
    cout << "|StudentID\tQuiz1\t\tQuiz2\t\tMid-Term\tFinal\n|";
    for(int r=0; r<4; r++)
    {
        for(int c=0; c<5; c++)
        {
            cout<< arr[r][c]<< "\t|\t";
        }
        cout <<endl<<"|";
    }
    cout << "-------------------------------------------------------------------------\n\n\n";
}

void choice2 (int select, int arr[][5], int row) //option 2 function
{
    int save=0;// initialize variable
        int enter; //declare
        bool found=false; //initialize found variable
        cout << "Enter student ID: "; //ask for student ID
        cin >> enter; //get input
        for(int r=0; r<row; r++) 
        {
            for(int c=0; c<1; c++)
            {
            if(enter== arr[r][c]) //if the value is found in the list of student ID
            {
            found=true; //set found to true to exit loop
            save=r; //set save equal the row of the value 
            }
            }
        }
        if(found) // if value is found then display the student's information
        {
            cout << "StudentID\tQuiz1\t\tQuiz2\t\tMid-Term\tFinal\n|";
            for(int row=save; row==save; row++)
            {
                for(int column=0; column<5; column++)
                {
                    cout << arr[row][column]<< "\t|\t";
                }
            }
            cout<<endl;
        }
        else //if the ID is not found 
        {
        cout <<"Student ID not found!"; //error message 
        exit(0); //exit program
        }
    }

    void choice3(int select, int arr[][5], int row) //option 3 function
    {
        int lowest=arr[0][0]; //set lowest 
        int greatest=0; //set greatest
        for(int r=0; r<row; r++)
        {
            for(int c=4; c==4; c++)
            {
                if(arr[r][c]< lowest) //if any value is found that is less than lowest in the final grade column
                lowest=arr[r][c]; //set lowest equal to that value
                else if(arr[r][c]>greatest)//if any value is found that is higher than greatest in the final grade column
                greatest=arr[r][c]; //set greatest equal to that value
            }
        }
        cout << "The highest final score is "<< greatest <<endl; //display highest final score
        cout << "The lowest final score is " <<lowest <<endl; //display lowest final score
    }
    