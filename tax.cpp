#include <iostream>

using namespace std;

int main()
{
    int sales = 95000;

    int stateTax = 0.04 * sales;
    int countyTax = 0.02 * sales;
    int totalTax = stateTax + countyTax;

    cout << "Total Tax : $" << totalTax;
}