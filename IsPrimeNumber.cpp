#include <iostream>
using namespace std;

int main()
{
  int divisor, isPrime=0,m=0;
  double num;
  char answer;
 
do{
  //Ask user to enter a number
   cout << "Please Enter a number and I'll tell you if it's a Prime or not: ";

   //Get the input from the user
  cin >> num;

  //The number will fall into the loop in two cases: the number isn't an integer, either it's a negative
  while(num!=static_cast<int>(num)||num<0)
  {
    //If the number isn't an integer 
    if(num!=static_cast<int>(num))
    //the follow executes
    {
      cout << "Invalid! Please Enter an Integer number: ";
      //get the input again
      cin >> num;
    }

    //If the input is negative
    else if(num<0)
  {
    //The following executes
    cout <<"Invalid! Enter positive number only: ";
    //Get input again
    cin >>num;
  }
  else if(num==0 || num==1)
  {
    cout<<"Number is not Prime";

  }
  }
//prime check

   m=num/2;  
  for(divisor = 2; divisor <= m; divisor++)  
  {  
      if((static_cast<int>(num) % divisor) == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          isPrime=1; 
          break;  
      } 
  } 
  
 if (isPrime==0)  
      {
      cout << "Number is Prime."<<endl;
      }  

  //ask if the user wants to do one more time
      cout <<"Do you want to try other? (y/n) ";
cin >> answer;
 }while(answer=='y'|| answer== 'Y');
  
     return 0;
}