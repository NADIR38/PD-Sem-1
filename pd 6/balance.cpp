#include<iostream>
using namespace std;
float amount(string code,float minutes,string time);
main()
{
string code;
cout<<"enter service code..";
cin>>code;
string time;
cout<<"enter time..";
cin>>time;
float minutes;
cout<<"enter minutes..";
cin>>minutes;
cout<<"your bill is.."<<amount(code,minutes,time);








}
float amount(string code,float minutes,string time)
{
    float net;
if(time=="day"&& code=="premium"&& minutes<=75)
{
 net=25;  
}
if(time=="day"&& code=="premium"&& minutes>75)
{
 net=(minutes-75)*(0.10)+(25);   
}
if(time=="night"&& code=="premium"&& minutes<100)
{
 net=(25);
 if(time=="night"&& code=="premium"&& minutes>100)
{
 net=(minutes-100)*(0.05)+(25);   
}   
}
if(code=="regular"&& minutes<=50)
{
net=10;   
}
if(code=="regular"&& minutes>50)
{
 net=(minutes-50)*(0.2)+(10)   ;
}
return net;










}


