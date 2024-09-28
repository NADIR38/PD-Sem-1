#include<iostream>
using namespace std;
void discount()
{
cout<<"enter price";
float price;
cin>>price;
string country;
cout<<"enter country..";
cin>>country;
float pay;
float discount;
if(country =="pakistan")
{
discount=0.05;
cout<<pay;
}
if(country =="canada")
{
discount=0.45;
cout<<pay;
}
if(country =="ireland")
{
discount =0.1;
cout<<pay;
}
if(country=="england")
{
discount=0.3;
cout<<pay;
}
if(country=="india")
{
discount=0.2;
cout<<pay;

}
pay=(price*discount)-price;
}
main()
{
discount();
}