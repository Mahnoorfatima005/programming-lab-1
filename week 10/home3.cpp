#include <iostream>
using namespace std;

float calculateTax(char vehicleCategory, float basePrice)
{
    float taxRate = 0;

    if(vehicleCategory == 'M')
        taxRate = 0.06;
    else if(vehicleCategory == 'E')
        taxRate = 0.08;
    else if(vehicleCategory == 'S')
        taxRate = 0.10;
    else if(vehicleCategory == 'V')
        taxRate = 0.12;
    else if(vehicleCategory == 'T')
        taxRate = 0.15;

    float totalPrice = basePrice + (basePrice * taxRate);
    return totalPrice;
}

int main()
{
    char vehicleCategory;
    float basePrice;

    cout << "Enter Vehicle Type (M/E/S/V/T): ";
    cin >> vehicleCategory;

    cout << "Enter Price: ";
    cin >> basePrice;

    float finalAmount = calculateTax(vehicleCategory, basePrice);

    cout << "Final price of vehicle type " << vehicleCategory << " is $" << finalAmount;

    return 0;
}