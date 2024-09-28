#include <iostream>
using namespace std;
void multiply(float);
main()
{
float distance,fuel;
cout<<"distance is..";
cin>>distance;
multiply(distance);


}
void multiply(float distance)
{
float fuel;
fuel=distance*10;
if(fuel<100)
{
fuel=100;
}
cout<<"fuel required.."<<fuel;

}



































































