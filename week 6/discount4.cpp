#include<iostream>

using namespace std;
float discount(float price,string day,string month);
int main()
{
float price;
string day;
string month;
cout<<"enter price..";
cin>>price;
cout<<"day..";
cin>>day;
cout<<"enter month..";
cin>>month;
int result=discount(price,day,month);
cout<<"final price is.."<<result;
return 0;


}
float discount(float price,string day,string month)
{
float net=price;
if(day=="sunday" &&( month=="october" ||month=="august"||month=="march"))
{
     net=price-(price * 0.1);
}
if(day=="monday"&& (month=="december"||month=="november") )
{
 net=price-(price * 0.05);
}
return net;


}