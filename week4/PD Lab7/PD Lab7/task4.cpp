#include <iostream>
using namespace std;
void triangle(int value);
main()
{
    int value;
    cout << "Enter number of Triangle: ";
    cin >> value;
    triangle(value);
}
void triangle(int value)
{
    int sum=0;
    for (int x=1;x<=value;x++)
    {
        sum = sum + x;
    }
    cout << "Dots in the Triangle: " << sum;
}