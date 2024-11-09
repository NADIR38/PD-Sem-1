#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Number of elements: ";
    cin >> n;

    int number[n];
    
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> number[i];

        
        bool duplicate = false;
        for (int j = 0; j < i; j++) {
            if (number[i] == number[j]) {
                duplicate = true;
                break;
            }
        }

        if (duplicate) {
            cout << "Already entered." << endl;
        } else {
            cout << "Unique number." << endl;
        }
    }

    return 0;
}
