#include <iostream>
using namespace std;
void printheader();
void menu();
void product1();
void product2();
void product3();
float quantity,price,tax,net,option,total;
main()
{
system("color 04");
printheader();
while(true)
{
menu();
if(option==1)
{
product1();
}
if(option==2)
{
product2();
}
if(option==3)
{
product3();
}






}
void printheader()
{
cout <<                 "             -------------------------------------"<<endl;
cout <<                 "                             PMS                  "<<endl;
cout<<                  "             -------------------------------------"<<endl; 




}
void menu()
{
cout<<"1..product 1"<<endl;
cout<<"2..product 2"<<endl;
cout<<"3..product 3"<<endl;
cout<<"4..total cost"<<endl;
cout<<"5..product detail"<<endl;
cout<<"6..exit"<<endl;
cout<<"enter option..";
cin>>option;

}
void product1()
{
cout<<"product name ..eggs";
cout<<"quantity.."<<endl;
cin>>quantity;
cout<<"per unit.."<<endl;
cin>>price;
cout<<"tax.."<<endl;
cin>>tax;
net=(quantity*price)-(price*quantity*(tax/100));
cout<<"total cost is.."<<endl<<net;
}
void product2()
{
cout<<"product name ..bread"<<endl;
cout<<"quantity.."<<endl;
cin>>quantity;
cout<<"per unit.."<<endl;
cin>>price;
cout<<"tax.."<<endl;
cin>>tax;
net=(quantity*price)-(price*quantity*tax);
cout<<"total cost is.."<<endl<<net;

}





