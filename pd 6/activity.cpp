#include<iostream>
using namespace std;
string activity(string temo,string humidity);
main()
{
string temo,humidity;
cout<<"enter temp..";
cin>>temo;
cout<<"enter humidity..";
cin>>humidity;
cout<<"activity is.."<<activity(temo,humidity);




}
string activity(string temo,string humidity)
{
if(temo=="warm"&& humidity=="humid")
{
return "swim";    
}
if(temo=="warm"&& humidity=="dry")
{
return "play tennis";    
}
if(temo=="cold"&& humidity=="humid")
{
return "watch tv";    
}
if(temo=="cold"&& humidity=="dry")
{
return "play basketball";    
}



}