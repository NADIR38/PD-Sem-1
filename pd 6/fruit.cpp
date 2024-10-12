#include<iostream>
using namespace std;
float price(string fruit,string day,float quantity);
main()
{
string fruit;
cout<<"enter fruit name..";
cin>>fruit;
string day;
cout<<"enter day..";
cin>>day;
float quantity;
cout<<"enter quantity..";
cin>>quantity;
cout<<"your bill is.."<< price( fruit, day, quantity);


}
float price(string fruit,string day,float quantity)
{
 float rate;   
 if((day=="sunday"||day=="saturday")&&(fruit=="banana"))
{
    rate=quantity*2.70;
}
else if((day!="sunday"||day!="saturday")&&(fruit=="banana"))
{
    rate=quantity*2.50;
}
else if((day!="sunday"||day!="saturday")&&(fruit=="apple"))
{
    rate=quantity*1.20;
}
else if((day=="sunday"||day=="saturday")&&(fruit=="apple"))
{
    rate=quantity*1.25;
}
else if((day!="sunday"||day!="saturday")&&(fruit=="orange"))
{
    rate=quantity*0.85;
}
else if((day=="sunday"||day=="saturday")&&(fruit=="orange"))
{
    rate=quantity*1.45;
}
else if((day!="sunday"||day!="saturday")&&(fruit=="kiwi"))
{
    rate=quantity*2.70;
}
else if((day=="sunday"||day=="saturday")&&(fruit=="kiwi"))
{
    rate=quantity*3.00;
}
else if((day!="sunday"||day!="saturday")&&(fruit=="grapefrruit"))
{
    rate=quantity*1.45;
}
else if((day=="sunday"||day=="saturday")&&(fruit=="grapefruit"))
{
    rate=quantity*1.60;
}
else if((day!="sunday"||day!="saturday")&&(fruit=="pineapple"))
{
    rate=quantity*5.50;
}
else if((day=="sunday"||day=="saturday")&&(fruit=="pineapple"))
{
    rate=quantity*5.60;
}
else if((day!="sunday"||day!="saturday")&&(fruit=="grapes"))
{
    rate=quantity*3.85;
}
else if((day=="sunday"||day=="saturday")&&(fruit=="grapes"))
{
    rate=quantity*4.20;
}

return rate;


}
