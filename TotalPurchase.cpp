#include <iostream>
using namespace std;

int main()
{
    // Heading
    cout << "\t\t\t\t\tDescription: This program displays the prices and purchase." << endl;
    cout << "\t\t\t\t\tLAB: Total Purchase" << endl; 
    cout << "\t\t\t\t\tCourse: CIT 120-T1"<< endl;
    cout << "\t\t\t\t\tProgrammer: Christina Trinh" << endl;
    cout << "\t\t\t\t\tProfessor: Makhene" << endl;
    cout << "\t\t\t\t\tDate: 2/5/21" << endl;

    float price1, price2, price3, price4, price5, subtotal, amountTax, total;
    
    price1 = 15.95;
    price2 = 24.95;
    price3 = 6.95;
    price4 = 12.95;
    price5 = 3.95;
    const float salesTax = 0.07;

    subtotal = price1 + price2 + price3 + price4 + price5;
    amountTax = subtotal * salesTax;
    total = subtotal - amountTax;

    //Display each item's price.
    cout << "Price of item 1 is $" << price1 << endl;
    cout << "Price of item 2 is $" << price2 << endl;
    cout << "Price of item 3 is $" << price3 << endl;
    cout << "Price of item 4 is $" << price4 << endl;
    cout << "Price of item 5 is $" << price5 << endl;

    //Display the subtotal of the sale.
    cout << "The subtotal of the sale is $" << subtotal << endl;

    //Display the amount of the sales tax.
    cout << "The amount of the sales tax is $" << amountTax << endl;

    //Display the final total.
    cout << "The total amount is $" << total << endl;
    return 0;
}