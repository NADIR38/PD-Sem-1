#include<iostream>
using namespace std;
void greatest(int n)
{

}
main()
{
    int n;
    cout<<"no of elements..";
    cin>>n;
    int max=0;
       int number[n];
  for(int i=0;i<n;i++)
   {
     cin>>number[i];}
   for(int j=0;j<n;j++)
   {
    if( number[j]>max)
        max=number[j];

    
   }
   cout<<"max is.."<<max;
   
   
   
   }

