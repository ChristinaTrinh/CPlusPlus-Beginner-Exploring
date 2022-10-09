//Programmer: Christina Trinh
//Date: 4/18/21
//Program Challenge number 1 page 499
#include<iostream>
using namespace std;
bool check(int[], int, int); //prototype
int main()
{
    int num;
    //date of the array
    int array[18]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                   8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                   1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    cout << "Please Enter a number: "; //tell user to enter number
    cin>>num; //get number
    if(check(array, 18, num)) //if return statement is true
    cout <<"Number is valid"; //display valid message
    else //if false
    cout << "Number is invalid"; //display invalid message
}
//function to check-receive the array, array size and number to check
bool check(int arr[], int size, int checkNum)
{
    for(int count=0; count<size; count++) 
    {
        if(arr[count]==checkNum) //if it's in the array
        return 1; //return true
    }
    return 0; //if not, return false
}

//Programmer: Christina Trinh
//Date: 4/18/21
//Program Challenge number 3 page 500

#include <iostream>
using namespace std;
bool win(const int[], int, int); //prototype
int main()
{
    //data of array
	int array[10]= { 13579,26791,26792,33445,55555,
				     222262483,77777,79422,85647,93121};
	int num; //declare
	cout << "Enter this week's 5-digit winning lottery number:";
	cin >> num; //get input
	if(win(array, 10, num)) //if return statement is true
		cout << "You won this week.\n"; //displays win
	else //if not 
		cout << "You did not win this week.\n"; //display not win
	return 0;
}

//check function receive array, size and number to check
bool win(const int arr[], int size, int lucky)
{
	int first=0, //firt element
    last=size-1, //last element
    middle; //middle
    bool found=false; //set found to false

    while(!found && first<=last)
    {
        middle=(first+last)/2; 
        if(arr[middle]==lucky) // if middle value is matched the number
        {
            found=true; //set to true to stop the loop
            return 1; // then return true
        }
        else if(arr[middle]>lucky) //if the number is greater than middle value
        last= middle-1; //move to the first half to check
        else //if the number is less than middle value
        first=middle+1; //move to upper half to check
    }
    return 0; //if no match then return false
}