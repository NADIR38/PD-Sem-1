#include<iostream>
using namespace std;
int gcd(int a,int b);
int lcm(int a,int b);
main()
{
int a;
cout<<"enter first num:";
cin>>a;
int b;
cout<<"enter second num";
cin>>b;
cout<<"gcd is.."<<gcd(a,b);
cout<<"lcm is .."<<lcm(a,b);

}
int gcd(int a,int b)
{
    int result;
int min;
if(a<b)
{min=a;}
else{min=b;}
int i;
for(i=1;i<=min;i++)
if(a%i==0 && b%i==0)
result=i;
return result;


}
int lcm(int a,int b)
{
int lcms;
lcms=a*b/gcd(a,b);
return lcms;
}