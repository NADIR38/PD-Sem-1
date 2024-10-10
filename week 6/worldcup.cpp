#include<iostream>
using namespace std;
float checkbudget(float budget,float groupmem,string satus);
float tickets,remain;
main()
{
float budget;
cout<<"enter budget..";
cin>>budget;
float groupmem;
cout<<"enter people..";
cin>>groupmem;
string status;
cout<<"enter status..";
cin>>status;
checkbudget(budget,groupmem,status);
float remaining;
if(tickets>=groupmem)
{
    cout<<"you have "<<budget<<"which is enough";
}
 if (status=="normal" && tickets<groupmem)
{
remaining=(299.99*groupmem)-remain;
cout<<"you donot have enough"<<remaining;    
}
 if (status=="vip" && tickets<groupmem)
{
remaining=(499.9*groupmem)-remain;
cout<<"you donot have enough"<<remaining;    
}
}
float checkbudget(float budget,float groupmem,string status)
{
float transport;
if(groupmem>=1 && groupmem<=4)
{
transport=budget-(budget*0.75);
}
if(groupmem>=5 && groupmem<=9)
{
transport=budget-(budget*0.60);
}
if(groupmem>=10 && groupmem<=24)
{
transport=budget-(budget*0.50);
}
if(groupmem>=25 && groupmem<=49)
{
transport=budget-(budget*0.40);
}
if(groupmem>=50 )
{
transport=budget-(budget*0.25);
}
remain=budget-transport;
cout<<remain;
if(status=="vip")
{
tickets=remain/499.9;
}
if(status=="normal")
{
tickets=remain/249.99;
}
return remain;



  








}