#include <iostream>
using namespace std;
void printStars(int size);
main()
{
    int row;
    cout << "Enter desired number of rows: ";
    cin >> row;
    printStars(row);
}
void printStars(int size)
{
    for (int row = size;row>=1;row--)
    {
        for (int col = row;col>=1;col--)
        {
            cout << "*";
        }
        cout << endl;
    } 
}