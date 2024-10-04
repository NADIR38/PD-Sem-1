#include<iostream>
using namespace std;
float volume(float lenght,float width,float height);
main()
{
float height,width,lenght;
cout<<"enter lenght..";
cin>>lenght;
cout<<"enter height..";
cin>>height;
cout<<"enter width..";
cin>>width;
float result;
result=volume( lenght, width, height);
string unit;
cout<<"enter unit..";
cin>>unit;
if(unit=="m")
{
cout<<"volume is.."<<result;    
}
if(unit=="cm")
{
result=result*1000000;
cout<<"volumme is .."<<result;
}
if(unit=="mm")
{
result=result*1000000000 ;
cout<<"volume is.."<<result;   
}

}
float volume(float lenght,float width,float height)
{
float volumes;
volumes=(height*width*lenght)/3;
return volumes;
}