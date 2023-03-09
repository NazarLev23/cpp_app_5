#include <iostream>

#include <ctime> 

using namespace std;

int main()
{
    srand(time(0));
    const int size = 6;
    int profit[size]; 

    for (size_t i = 0; i < size; i++)
    {
        cout << "Enter the profit for " << i+1 << " month: ";
        cin >> profit[i];
    }
    int TotalProfit = 0; 

    for (size_t i = 0; i < size; i++){
        TotalProfit += profit[i];
    }
    {
        cout << "Totalproft: " << TotalProfit <<"\t";
    }
    return 0;
}