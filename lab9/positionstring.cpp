#include <iostream>
#include <cstring>
using namespace std;
void displayAlphabetLocations(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        
        if (isalpha(arr[i])) {
            cout << "Character '" << arr[i] << "' found at index: " << i << endl;
        }
    }
}

int main() {
    char word[100];

      cout << "Enter a word: ";
    cin >> word;

  
    int length = 0;
    while (word[length] != '\0') {
        length++;
    }


    displayAlphabetLocations(word, length);

    return 0;
}
