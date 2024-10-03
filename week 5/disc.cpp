
#include<iostream>
#include<cmath>
using namespace std;
main()
{
 float root1,root2;
cout<<"value of a is..";
float a;
cin>>a;
cout<<"enter b..";
float b;
cin>>b;
cout<<"enter c..";
float c;
cin>>c;
float disc;
disc=(b*b)-(4*a*c);
if(disc==0)
{
root1=root2=-b/2*a;
cout<<"root is"<<root1;
}
else if(disc>0)
{
root1=(-b-sqrt(disc))/2*a;
cout<<"root 1 is.."<<root1;
root2=(-b+sqrt(disc))/2*a;
cout<<"root 2 is.."<<root2;
}
else if(disc<0)
{
root1=(-b-sqrt(disc))/2*a;
cout<<"complex root is ..i"<<root1;
root2=(-b+sqrt(disc))/2*a;
cout<<"root 2 is ..i"<<root2;
}





}