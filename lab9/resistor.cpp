#include<iostream>
using namespace std;
main()
{
 int n;
 cout<<"enter resistors";
 cin>>n;
 int number[n];
 int sum=0;
 for(int i=0;i<n;i++)
 {
    cin>>number[i];
 
sum=sum+number[i];
 

 }
 cout<<"resitence is"<<sum;

}