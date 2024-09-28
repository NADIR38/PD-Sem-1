#include <iostream>
using namespace std;
void add(int,int);
void substract(int,int);
void multiply(int,int);
void divide(int,int);
main()
{
int n1,n2;
char op;
cout<<"n1 is..";
cin>>n1;
cout<<"n2 is ..";
cin>>n2;
cin>>op;
if(op=='+')
{
add(n1,n2);
}
if(op=='-')
{
substract(n1,n2);
}
if(op=='*')
{
multiply(n1,n2);
}
if(op=='/')
{
divide(n1,n2);
}
}
void add(int n1,int n2)
{
int sum;
sum=n1+n2;
cout<<sum;
}
void substract(int n1,int n2)
{
int difference;
difference=n1-n2;
cout<<difference;
}
void multiply(int n1,int n2)
{
int product;
product=n1*n2;
cout<<product;
}
void divide(int n1,int n2)
{
int division;
division=n1/n2;
cout<<division;
}







