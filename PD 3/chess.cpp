#include <iostream>
using namespace std;
void move(int,int);
main()
{
int player1,player2;
cout<<"enter palyer 1..";
cin>>player1;
cout<<"enter palyer 2..";
cin>>player2;
move(player1,player2);



}
void move(int player1,int player2)
{
int p1;
int p2;
if(p2<=p1+6) 
{
cout<<"true";
}
if(p2>p1+6)
{
cout<<"false";
}
}