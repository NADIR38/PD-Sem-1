#include<iostream>
using namespace std;
void challan(int);
main()
{
int speed;
cout<<"enter speed..";
cin>>speed;
challan(speed);


}
void challan(int a)
{
int speed;
if(speed>100)
{cout<<"challaned";}
if(speed<=100)
{
cout<<"not challaned";
}
}