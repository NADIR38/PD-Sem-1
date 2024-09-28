#include <iostream>
using namespace std;
void pet(int);
main()
{
int holidays;
cout<<"holidays..";
cin>>holidays;
pet(holidays);





}
void pet(int holidays)
{
int holiday;
int remaining;
remaining=365-holidays;
int time;
time=(holiday*127)+(remaining*63);
int norm;
norm=30000;
int difference;
difference=norm-time;
cout<<"difference is.."<<difference;
if(difference<8000)
{
cout<<"tom stays"<<endl;
}
if(difference>8000)
{
cout<<"tom runs away"<<endl;
}




}