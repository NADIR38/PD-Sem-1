#include <iostream>
using namespace std;
#include <cmath> // For abs function

int totalDigits(int number) 
{
    
    if (number == 0) return 1;

    
    number = abs(number);
    int count = 0;

    
    while (number > 0) {
        number=number/10; 
        count++;      
    }

    return count;
}

int main() {
    int number;

    
    cout << "Enter an integer: ";
    cin >> number;

    
    cout << "Total digits in " << number << ": " << totalDigits(number) << endl;

    return 0;
}

