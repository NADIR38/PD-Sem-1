#include <iostream>
using namespace std;
float giverate(string montth,float days,string type);
main()
{
string month;
cout<<"enter month..";
cin>>month;
float days;
cout<<"days of stay..";
cin>>days;
string type;
cout<<"enter type..";
cin>>type;
cout<< "the total bill is"<<giverate( month, days, type);








}
float giverate(string month,float days,string type)
{
    float rate;
if((month=="may"||month=="october")&&(days<=7&& type=="studio"))
{
rate=days*50;
}
else if((month=="may"||month=="october")&&(days<=14&& type=="apartment"))
{
rate=(days*65);
}
else if((month=="may"||month=="october")&&(days>7&& type=="studio"))
{
rate=(days*50)-(days*50*0.05);
}
else if((month=="may"||month=="october")&&(days>14&& type=="studio"))
{
rate=(days*50)-(days*50*0.30);
}
else if((month=="may"||month=="october")&&(days>14&& type=="apartment"))
{
rate=(days*65)-(days*65*0.1);
}
else if((month=="june"||month=="september")&&(days<=14&& type=="studio"))
{
rate=(days*75.20);
}
else if((month=="june"||month=="september")&&(days>14&& type=="studio"))
{
rate=(days*75.20)-(days*75.20*0.20);
}
else if((month=="june"||month=="september")&&(days>14&& type=="apartment"))
{
rate=(days*68.70)-(days*68.70*0.1);
}
else if((month=="june"||month=="september")&&(days<=14&& type=="apartment"))
{
rate=(days*68.70);
}
else if((month=="august"||month=="july")&&(days>14&& type=="apartment"))
{
rate=(days*77)-(days*77*0.1);
}
else if((month=="august"||month=="july")&&(days<=14&& type=="apartment"))
{
rate=(days*77);
}
else if((month=="august"||month=="july")&&(days<=14&& type=="apartment"))
{
rate=(days*77);
}
else if((month=="august"||month=="july")&&( type=="studio"))
{
rate=(days*76);
}
return rate;





}