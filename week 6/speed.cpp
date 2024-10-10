#include<iostream>
using namespace std;
string checkspeed(int speed);
main()
{
int speed;
cout<<"enter speed..";
cin>>speed;
cout<<"your speed is.."<<checkspeed(speed);





}
string checkspeed(int speed)
{
string status;
if(speed<10)
{
status="slow";
}
if (speed>=10 && speed<50)
{
status="average";    
}
else if (speed>=50 && speed<150)
{
status="fast";    
}
else if (speed>=150&& speed<1000)
{
status="ultra fast";    
}
else if (speed>1000)
{
status="extremely fast";    
}
return status;



}