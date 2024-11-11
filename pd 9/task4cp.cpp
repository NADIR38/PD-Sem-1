#include <iostream>
using namespace std;
bool check(int num[],int ele);

main()
{
    cout<<"Enter the number of elements: ";
    int ele;
    cin>>ele;
    int num[ele];
    for (int x=0;x<ele;x++ )
    {cout<<"Enter  a number: ";
    cin>>num[x];}
    if (check(num,ele)==1)
    {
        cout << "BOOM!" << endl;
    } else {
        cout << "The number 7 is not in the array." << endl;
    }
    }
bool check(int num[],int ele)
{
    for (int x=0;x<ele;x++)
    {
        if (num[x]==7)
        return true;
    
    }
    return false;
 
}