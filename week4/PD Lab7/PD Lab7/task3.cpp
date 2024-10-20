#include <iostream>
using namespace std;
void amplify(int value);
main()
{
    int value;
    cout << "Enter the number to Amplify: ";
    cin >> value;
    amplify(value);
}
void amplify(int value)
{
        for (int x = 1;x<=value;x++)
        {
            if (x%4==0)
            {
                cout<< x * 10;
                
            }
            else
            {
                cout << x ;
            }
            if(x < value)
            {
                cout << ", ";
            }
        }
}