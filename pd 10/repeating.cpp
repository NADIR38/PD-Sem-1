#include<iostream>
using namespace std;
const int maxsize=100;
int arr[maxsize];
bool isrepeating(int lenght,int n);
main()
{
int lenght;
cout<<"enter lenght of cycle..";
cin>>lenght;
int n;
cout<<"enter no of elements..";
cin>>n;
for(int i=0;i<n;i++)
{
    cout<<"enter numbers..";
    cin>>arr[i];
}
if(isrepeating(lenght,n)==false)
{cout<<"not repeating";}
else{cout<<"repeating";}

}
bool isrepeating(int lenght,int n)
{
for(int i=0;i<n;i++)
{
    if(arr[i]!=arr[i%lenght])
   { return false;}
    else{
        return true;
    }
}

}