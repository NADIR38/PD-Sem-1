#include<iostream>
using namespace std;
void tp(float,float);
main()
{
cout<<"total rolls..";
float rolls;
cin>>rolls;
cout<<"people in house";
float people;
cin>>people;
tp(rolls,people);





}
void tp(float,float)
{
float rolls;
float people;
float perday;
perday=people*57.0;
float totalsheet;
totalsheet=rolls*500.0;
float days;
days=(totalsheet-perday)/(perday);
cout<<"days to last"<<days<<endl;

if(days<8.0)
{
cout<<"dont panic";
}

if(days>8.0)
{
cout<<"panic";

}




}