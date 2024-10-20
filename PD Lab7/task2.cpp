#include <iostream>
using namespace std;
void printStar1(int rowSize);
void printStar2(int rowSize);
main()
{
    int rowSize;
    cout <<"Enter desired number of rows: ";
    cin >> rowSize;
   
    printStar1(rowSize);
    printStar2(rowSize);
}
void printStar1(int rowSize)
{
    int size = rowSize/2;

    for (int row = 1; row <= size; row++)
    {    
        for (int col = 1; col <= size - row; col++)
        {
            cout << " ";
        }
        for (int star = 1; star <= row; star++)
        {
            cout << "*";
        }
        cout <<endl;
    }
}
void printStar2(int rowSize)
{ 
    int size = rowSize/2;   
    for (int row = 1; row <= size; row++)
    {   
        for (int col = 1; col < row; col++)
        {
            cout << " ";
        }
        for (int star = row; star <= size; star++)
        {
            cout << "*";
        }
        cout <<endl;
    }
}