#include<iostream>
using namespace std;
main()
{
string fruit[4]={"peach", "apple", "guava", "watermelon"};
int price[4]={60, 70, 40, 3};
float quantity;
cout<<"enter quantity..";
cin>>quantity;
string name;
cout<<"enter fruit..";
cin>>name;
int final[4]={0,0,0,0};
bool found=false;

for(int idx=0;idx<4;idx++)
{
    if(fruit[idx]==name)
    final[idx]=quantity*price[idx];
 found=true;   
}
if(found){
for(int idx=0;idx<4;idx++){
if(final[idx]!=0)
{cout<<final[idx];}}}
else{cout<<"invalid";}
}