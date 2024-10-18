#include <iostream>
#include <iomanip>  // for formatting output

using namespace std;

int main() {
    // 1. Variable declaration for product prices
    float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;

    // 2. Customer Purchase - Declare variables for product quantities
    int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;

    // 3. Currency Conversion - Declare conversion rates
    float usdToPhp, poundToPhp;

    // Input prices of products
    cout << "Welcome to SEVENPM Sari-Sari Store!" << endl;
    cout << "Enter the price of sugar (in USD): ";
    cin >> sugarPriceUSD;
    cout << "Enter the price of rice (in Pound): ";
    cin >> ricePricePound;
    cout << "Enter the price of sardines (in Pound): ";
    cin >> sardinesPricePound;
    cout << "Enter the price of coffee (in USD): ";
    cin >> coffeePriceUSD;
    cout << "Enter the price of milk (in USD): ";
    cin >> milkPriceUSD;

    // Input quantities purchased by the customer
    cout << "\nEnter the quantity of sugar purchased: ";
    cin >> sugarQty;
    cout << "Enter the quantity of rice purchased: ";
    cin >> riceQty;
    cout << "Enter the quantity of sardines purchased: ";
    cin >> sardinesQty;
    cout << "Enter the quantity of coffee purchased: ";
    cin >> coffeeQty;
    cout << "Enter the quantity of milk purchased: ";
    cin >> milkQty;

    // Input conversion rates
    cout << "\nEnter the USD to PHP conversion rate: ";
    cin >> usdToPhp;
    cout << "Enter the Pound to PHP conversion rate: ";
    cin >> poundToPhp;

    // 4. Calculating the total cost in PHP
    float totalSugarPhp = sugarPriceUSD * sugarQty * usdToPhp;
    float totalRicePhp = ricePricePound * riceQty * poundToPhp;
    float totalSardinesPhp = sardinesPricePound * sardinesQty * poundToPhp;
    float totalCoffeePhp = coffeePriceUSD * coffeeQty * usdToPhp;
    float totalMilkPhp = milkPriceUSD * milkQty * usdToPhp;

    // Calculate the grand total
    float grandTotalPhp = totalSugarPhp + totalRicePhp + totalSardinesPhp + totalCoffeePhp + totalMilkPhp;

    // Output the receipt
    cout << fixed << setprecision(2);  // Format the output to 2 decimal places
    cout << "\n--- RECEIPT ---\n";
    cout << "Sugar: " << sugarQty << " x $" << sugarPriceUSD << " (USD) = " << totalSugarPhp << " PHP" << endl;
    cout << "Rice: " << riceQty << " x £" << ricePricePound << " (Pound) = " << totalRicePhp << " PHP" << endl;
    cout << "Sardines: " << sardinesQty << " x £" << sardinesPricePound << " (Pound) = " << totalSardinesPhp << " PHP" << endl;
    cout << "Coffee: " << coffeeQty << " x $" << coffeePriceUSD << " (USD) = " << totalCoffeePhp << " PHP" << endl;
    cout << "Milk: " << milkQty << " x $" << milkPriceUSD << " (USD) = " << totalMilkPhp << " PHP" << endl;
    cout << "---------------------------\n";
    cout << "Grand Total: " << grandTotalPhp << " PHP" << endl;
    cout << "Thank you for shopping at SEVENPM Sari-Sari Store!" << endl;

    return 0;
}
