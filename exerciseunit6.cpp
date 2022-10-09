//33. page 370
int half(int num)
{
double halfNum= num/2;
return halfNum;
}
//6.5 page 327
void showNum(double) //the function prototype
void showNum(double num) // the function header
showNum (45.67) // the function call
//6.6 page 327
void timesTen(int number)
{
    for(int count=0; count <10; count++)
    cout << (number*10)<< endl;
}
//6.7 page 327
//prototype
void timesTen(int);

//6.24 page 366
//output
1.2

//6.25 page 366
//z= (val + val * 2)+ [(val1 + val2)*2] + [val1*static_cast<int>(val2)]
//z= (2   +  2  * 2)+ [(2    +  4  )*2] + [4   * 3]
//z=       6        +     12            +12
//output
30