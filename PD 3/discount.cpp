#include<iostream>
using namespace std;
void discount()
{
string country;
cout<<"enter country..";
cin>>country;
cout<<"enter price";
float price;
cin>>price;
float discount;
float pay;;
pay=price*(1.0-discount);
if(country == "pakistan")
{
discount=0.05;
cout<<pay;
}
if(country == "canada")
{
discount=0.450;
cout<<pay;
}
if(country == "ireland")
{
discount=0.10;
cout<<pay;
}
if(country=="england")
{
discount=0.30;
cout<<pay;
}
if(country=="india")
{
discount=0.20;
cout<<pay;

}

}
int main()
{
discount();
}