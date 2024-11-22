#include<iostream>
using namespace std;
main()
{
int days,count;

cout<<"enter no of days:";
cin>>days;
int mile[days];
for(int i=0;i<days;i++)
{
    cout<<"enter number of mies on day"<<i<<endl; 
    cin>>mile[i];
    if(mile[i]<mile[i-1])
    {

        count++;
    }
    
}
cout<<count;

}