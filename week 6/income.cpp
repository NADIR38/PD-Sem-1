#include <iostream>
using namespace std;
float totalincome(float rows,float columns, string screening);
main()
{
float rows,columns;
cout<<"enter rows..";
cin>>rows;
cout<<"enter columns";
cin>>columns;
string screening;
cout<<"enter screening type..";
cin>>screening;
cout<<"total income is.."<<totalincome(rows, columns,  screening);



}
float totalincome(float rows,float columns, string screening)
{
float income;
if(screening=="premier")
{
income=rows*columns*12.0;
}
if(screening=="normal")
{
income=rows*columns*7.50;
}
if(screening=="discount")
{
income=rows*columns*5;
}
return income;






}