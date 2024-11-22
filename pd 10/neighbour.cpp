#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"enter numbers you want to enter";
    cin>>n;
    int arr[n];
    int count;
    for(int i=0;i<n;i++)
    {
        cout<<"enter numbers:";
        cin>>arr[i];
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
        count++;
    }
    cout<<count;
}