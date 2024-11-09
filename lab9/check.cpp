#include <iostream>
using namespace std;

bool checkAmount(float total, float payable);

int main() {
    const int numCoins = 4;
    float coinValues[numCoins] = {0.25, 0.10, 0.05, 0.01}; 
    float coinQuantities[numCoins]; 
    float payable = 0;

   
    cout << "Enter the number of quarters: ";
    cin >> coinQuantities[0];
    cout << "Enter the number of dimes: ";
    cin >> coinQuantities[1];
    cout << "Enter the number of nickels: ";
    cin >> coinQuantities[2];
    cout << "Enter the number of cents: ";
    cin >> coinQuantities[3];

    
    for (int i = 0; i < numCoins; i++) {
        payable += coinQuantities[i] * coinValues[i];
    }

    
    float total;
    cout << "Enter the payable amount: ";
    cin >> total;
    checkAmount(total, payable);

    return 0;
}

bool checkAmount(float total, float payable) {
    if (total > payable) {
        cout << "No, insufficient amount." << endl;
        return false;
    } else {
        cout << "Yes, sufficient amount." << endl;
        return true;
    }
}
