#include<iostream>
using namespace std;
float tax(float price,string vehicle,float taxs);
 main()
{
  float price;
  cout<<"enter price..";
cin>>price;
string vehicle;
cout<<"enter type";
cin>>vehicle;
float taxs;
if(vehicle=="E")
{
  taxs=8;
}
if(vehicle=="m")
{
taxs=6;
}
if(vehicle=="S")
{
  taxs=10;
}
if(vehicle=="V")
{
 taxs= 12;
}
if(vehicle=="T")
{
 taxs=15; 
}
float result;
result= tax(price,vehicle,taxs);
  cout<<"net price is.."<<result;
  



}
float tax(float price,string vehicle,float taxs)
{

float taxprice;
taxprice=price*(taxs/100);
cout<<taxprice;
float net = price+taxprice;
return net;

}