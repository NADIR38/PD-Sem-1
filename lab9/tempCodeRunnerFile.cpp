#include <iostream>
using namespace std;

void addSevenToChords(string chords[], int size) {
for(int i=0;i<size;i++)
{
    int j=0;
    while(chords[i][j]!='\0')
    j++;

if(chords[i][j-1]!='7')
chords[i]+='7';
}
}

int main() {
    int size;
    cout << "Enter the number of chords: ";
    cin >> size;
    
    string chords[size];
    cout << "Enter the chords: ";
    for (int i = 0; i < size; i++) {
        cin >> chords[i];
    }

    addSevenToChords(chords, size);

    cout << "Chords with 7 added: ";
    for (int i = 0; i < size; i++) {
        cout << chords[i] << " ";
    }
    cout << endl;

    return 0;
}
