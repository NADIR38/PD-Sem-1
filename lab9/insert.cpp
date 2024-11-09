#include<iostream>
using namespace std;
void insertmiddle(int firstarray[],int nc,int secondarray[],int k);

main()
{
    int n;
    cout<<"enter no of elements in first array(2)..";
    cin>>n;
    
int firstarray[n];
for(int i = 0; i<n ;i++)
{
    cin>> firstarray[i];
}
int k;
cout<<"enter no of elements in 2nd array..";
cin>>k;
int secondarray[k];
for(int j=0;j<k;j++)
{
    cin>>secondarray[j];
}
  insertmiddle(firstarray, n, secondarray, k);

}
void insertmiddle(int firstarray[],int n,int secondarray[],int k)
{
    int finalarray[n+k];
    int index;
    finalarray[index++]=firstarray[0];
    for(int i=0;i<k;i++)
{
    finalarray[index++]=secondarray[i];

}
finalarray[index++]=firstarray[1];
for(int i=0;i<n+k;i++)
cout<<finalarray[i];
}