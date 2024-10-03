#include <iostream>
using namespace std;
void add(int ,int ,int ,int ,int);
int main()
{
int number;
cout<<"enter num..";
cin>>number;
int a,b,c,d,e;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>e;
add(a,b,c,d,e);






}
void add(int a,int b,int c,int d,int e)
{
int sum;
sum=a+b+c+d+e;
if(sum%2==0);
{
cout<<"number is even"<<endl;
}
if(sum%2==1)
{
cout<<"num is odd"<<endl;
}



}