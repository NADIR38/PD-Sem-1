#include<iostream>
using namespace std;
int same(int n1,int n2,int n3);
main()
{
int n1,n2,n3;
cout<<"enter n1..";
cin>>n1;
cout<<"enter n2..";
cin>>n2;
cout<<"enter n3..";
cin>>n3;
cout<<same( n1, n2, n3);





}
int same(int n1,int n2,int n3)
{
if(n1==n2 && n1==n3)
{
    return 1;;
}
else
{
 return 0;   
}
}