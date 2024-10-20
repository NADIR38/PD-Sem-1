#include <iostream>
using namespace std;
bool isPrime(int value);
main()
{
    int value;
    cout << "Enter Number: ";
    cin >> value;
    bool result = isPrime(value);
    cout << result;
}
bool isPrime(int value)
{
    bool result;
        if ((value%value==0) && (value/2 != 0) && (value/3 != 0))
        {
            result = true;
        }
        if ((value%2 == 0) || (value%3 == 0))
        {
            result = false;
        }
    return result;
}