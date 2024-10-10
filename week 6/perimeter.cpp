#include<iostream>
using namespace std;
float perimeter(float parameter,string shape);
main()
{
float parameter;
cout<<"enter paremeter(l,r)..";
cin>>parameter;
string shape;
cout<<"enter shape..";
cin>>shape;
cout<<"the perimeter is.."<<perimeter(parameter,shape);



}
float perimeter(float parameter,string shape)
{
float peri;
if(shape=="s")
{
 peri=parameter*4;   
}
if(shape=="c")
{
 peri=parameter*6.28;   
}
if(shape=="h")
{
 peri=parameter*6;   
}
if(shape=="t")
{
 peri=parameter*3;   
}
return peri;

}