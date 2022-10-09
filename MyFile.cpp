//Description: This program reads or creates a file from the user.
//LAB: My File
//Course: CIT 120-T1
//Programmer: Christina Trinh
//Professor: Makhene
//Date: 3/23/21
#include<iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    // Banner
    cout << "\t\t\t\t\tDescription: This program reads or creates a file from the user." << endl;
    cout << "\t\t\t\t\tLAB: My File" << endl; 
    cout << "\t\t\t\t\tCourse: CIT 120-T1"<< endl;
    cout << "\t\t\t\t\tProgrammer: Christina Trinh" << endl;
    cout << "\t\t\t\t\tProfessor: Makhene" << endl;
    cout << "\t\t\t\t\tDate: 3/23/21" << endl;

    //Variable declarations

    //Use to create a file
    ofstream outputFile;

    //Use to read a file
    ifstream inputFile;

    //Others variables
    int choice, age;
    string outputfileName, fullName, address;
    string inputfileName;
    char answer;
    string stillRead;


    //This do-while loop will repeat the program all over again if the user wish to
    do{
    //Menu for user to choose
    cout << "\t\tMenu\n\n";
    cout << "1. Create File\n";
    cout << "2. Read File\n";
    cout << "3. Exit\n";
    cout << "Please Enter your choice: ";
    
    //Get the user's choice from the menu
    cin >> choice;

    //Ignore the Enter in advanced
    cin.ignore();

    //If the input choice isn't integer then display Invalid Choice
    if(cin.fail())
      {
        cout << "Invalid Choice. ";

    //stop the program
        break; 
      }

    //If the choice is negative then displays Invalid Choice
    else if(choice <= 0)
      {
        cout << "Invalid Choice. ";

    //stop the program
        break;
      }

    //If the user choose to Exit then displays Program exited
    else if(choice==3)
      {
        cout << "Program exited.";

    //stop the program
        break;
      }

    // if the user choose choice 1 or 2
    while(choice==1 || choice==2)
    {

        //if the user chose 1
    if(choice==1)
      {
        //Ask for their file name to create a new file
        cout << "Please Enter your file name: ";

    //Get the file name
        getline(cin, outputfileName);

    //Create a new file with that file name
        outputFile.open(outputfileName);

    //Next, ask for the user's full name
        cout << "Please Enter your First name, last name, and middle name initial: ";

    //Get the name
        getline(cin,fullName);

    //Save data to the file
        outputFile << "Name: " << fullName << endl;

    //Ask for age
        cout<< "Please Enter your age: ";

    //Get age
        cin >> age;

    //Save data to the file
        outputFile << "Age: "<< age << endl;

    //Ask for address
        cout << "Please Enter your address: ";

    //Get the adress
        getline(cin,address);

    //Save data to the file
        outputFile << "Address: " << address << endl;

    //Tell the user that their data have been saved
        cout << "Data have been saved in "<< outputfileName << " file.\n";

    //Close the file
        outputFile.close();
      }

    //If the user chose 2 instead
    else if (choice==2)
      {
        //Ask for file name that they want to open
        cout << "Please Enter your File name: ";

    //Get the file name
        cin >> inputfileName;

    //Open the file
        inputFile.open(inputfileName);

    //Validate if the file exist
           if(inputFile)
             {
        //Continue to read file until the end
               while(inputFile >> stillRead)
                 {
            //Send data to the screen
                   cout << stillRead << endl;
                 }
        //Close file
        inputFile.close();
             }
    //if the file doesn't exist then send an error message
           else
             {
               cout<< "Error opening the file.\n";
             }
       }
    }
    
    //Ask if the user want to start the program again 
         cout<< "Do you want to start again? (Y/N)";

    //Get the answer
         cin >> answer;
//if the user answered yes, then start the loop again, if no, exit the loop
}while(answer == 'y' || answer =='Y');

return 0;
}