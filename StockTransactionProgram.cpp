//  Group C
//  Stock Transaction Program
//  Francois Noel
//  Nafissa Sheta
//  Christina Trinh
//  Charlie Chen
// 02/13/2021

//This program is to calculate the Stock Transaction of Joe
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constant variables for stocks that Joe purchased last month
    const int numSharesPurchased = 1000;
    const float paidPerShare = 45.50;
    const float commissionRatePurchased = 0.02;

    // Constant variables for stocks that Joe purchased two weeks later
    const int numSharesSold = 1000;
    const float soldPerShare = 56.90;
    const float commissionRateSold = 0.02;
     
    // Variables included
    double totalPaid, totalSold, commissionAmountPurchased, commissionAmountSold, totalCommission, profit;

    // Total Paid and Total Sold
    totalPaid = numSharesPurchased * paidPerShare;
    totalSold = numSharesSold * soldPerShare;

    // Commissions
    commissionAmountPurchased = commissionRatePurchased * totalPaid;
    commissionAmountSold = commissionRateSold * totalSold;
    totalCommission = commissionAmountPurchased + commissionAmountSold;

    // Profit
    profit = totalSold - (totalPaid + totalCommission);

    // Displays the total paid, amount of commission for purchasing, the total sold amount of commission for selling, and profit.

    cout << "-The amount of money Joe paid for the stock: $"  << setprecision(2)<< fixed << totalPaid << ".\n"
    <<"-The amount of commission Joe paid for his broker when he bought the stock: $" 
    <<  commissionAmountPurchased << ".\n" << "-The amount that Joe sold the stock for: $" << totalSold << ".\n" 
    << "-The amount of commission Joe paid his broker when he sold the stock: $" << commissionAmountSold << ".\n"
    << "-The amount of profit that Joe made after selling his stock and paying the two commissions to his broker: $" << profit << ".\n"
    << "*** Joe made $" << profit << " throughout his transaction.\n";
   return 0;
}


  