#include<iostream>
using namespace std;
int sum(int digit);
main()
{
int digit;
cout<<"enter number..";
cin>>digit;
cout<<"the sum is.."<<sum(digit);




}
int sum(int digit)
{
int d1=digit/100;
int d2=digit%100;
int d3=d2/10;
int d4=d2%10;
int add=d1+d3+d4;
return add;


}