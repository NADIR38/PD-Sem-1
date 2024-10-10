#include<iostream>
using namespace std;
string evenodd(int n1,int a,int b,int c);
main()
{
int n1,a,b,c,d;
cout<<"enter number";
cin>>n1;
cin>>a;
cin>>b;
cin>>c;

cout<<evenodd(n1,a,b,c);

}
string evenodd(int n1,int a,int b,int c)
{
    int add;
    add=a+b+c;
if((n1%2==1 && add%2==1)||(n1%2==0 && add%2==0))
{
    return "true";
}
else
{
return "false";    
}





}