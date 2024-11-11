#include <iostream>
#include <string>
using namespace std;

string MOVES[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step",
                    "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};

void convertPinToDanceMoves(const char pin[])
{
    for (int i = 0; i < 4; i++)
    {
        if (pin[i] < '0' || pin[i] > '9')
        {
            cout << "Invalid input." << endl;
            return;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        int digit = pin[i] - '0';
        int moveIndex = (digit + i) % 10;
        cout << MOVES[moveIndex];
        if (i < 3)
        {
            cout << ", ";
        }
    }
    cout << endl;
}

int main()
{
    char pin[5];
    cout << "Enter a 4-digit PIN: ";
    cin >> pin;
    convertPinToDanceMoves(pin);
    return 0;
}
