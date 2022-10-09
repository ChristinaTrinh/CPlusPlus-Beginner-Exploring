//Description: This program checks and sorted array
//LAB: Array Sort
//Course: CIT 120-T1
//Programmer: Christina Trinh
//Professor: Makhene
//Date: 4/20/21
#include<iostream>
using namespace std;

//prototypes
bool search (const int[], int, int);
void sort (int[], int);
void swap(int &, int &);
void display( const int[], int);

int main()
{
    int num; //declare variable
    int array[10]={4, 2, 3, 1, 5, 7, 10, 8, 9, 6}; //initialize array
    cout << "Enter a number: "; //tell user to enter number
    cin >>num; //get input
    if(search(array, 10, num)) //check if the number is in the array
    cout << "The number is in the array.\n"; //if it's in the array
    else
    cout <<"The number is not in the array"; //if not in the array
    
    sort(array, 10); //call sort function
    display(array, 10); // call display function
    return 0;
}

//Search function receives array, size, and number to search
bool search (const int arr[], int size, int numSearch)
{
    int index=0; 
    bool found=false; // set found to false
    while( !found && index<size ) //if number is not found yet, the loop will continue 
    {
        if(arr[index]==numSearch) //if the loop found the number in array
        {
        found=true; //set found = true so it gets out of loop
        return true; //return bool
        }
        index++;
    }
    return false; //if the loop is over and still not found the number
}

//sort function receives array and its size
void sort (int arr[], int size)
{
    int max;
    int index;
    for(max=size-1; max>0; max--) //decrease its size after each loop
    {
        for(index=0; index<max; index++) 
        {
            if (arr[index]>arr[index+1]) //if 1 value is greater than another
            {
                swap(arr[index], arr[index+1]); //then swap
            }
        }
    }
}

//swap function receives the two values to swap 
void swap(int &num1, int &num2)
{
    int temp=num1; //set first value to temp
    num1 = num2; //set first value = second value
    num2=temp; //set second value = first value
}

//display function receives the sorted array and its size
void display (const int arr[], int size)
{
    int index; 
    cout << "The sorted array: ";

    //display the values in sorted array
    for(index=0; index <size; index++)
    {
      cout << arr[index]<< " ";
    }
    cout << endl;
}
    
//header function
void banner ()
{
    cout << "\t\t\t\t\tDescription: This program checks and sorted array." << endl;
    cout << "\t\t\t\t\tLAB: Array Sort" << endl; 
    cout << "\t\t\t\t\tCourse: CIT 120-T1"<< endl;
    cout << "\t\t\t\t\tProgrammer: Christina Trinh" << endl;
    cout << "\t\t\t\t\tProfessor: Makhene" << endl;
    cout << "\t\t\t\t\tDate: 4/20/21" << endl;
}