#include<iostream>
using namespace std;

double getNum(); //prototype
void checkPositive(double); //prototype
int main()
{
    double number; //declare variable
    number= getNum(); // call getNum function
    checkPositive(number); //cann checkPositive function
return 0;
}

//get a number
double getNum()
{
    int num;
    cout<<" Please Enter a positive number: ";
    cin >> num;
    return num;
}

//check positive
void checkPositive(double positiveNum)
{
    if(positiveNum >=0)
    cout << "Your number is positive.";
    else
    cout <<"Your number is not positive.";
}


