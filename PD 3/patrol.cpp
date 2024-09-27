#include <iostream>
#include <windows.h>
using namespace std;
void printmaze();
void gotoxy(int x,int y);
void playermove(int x,int y);
main()
{
system("cls");
printmaze();
gotoxy(0,15);
int x=3,y=2;
while(true)
{
playermove(x,y);
y=y+1;

if(y==8)
{
y=1;
}




}




}
void printmaze()
{
cout<<"##################################                     "<<endl;
cout<<"#                                #  "<<endl;
cout<<"#                                #  "<<endl;
cout<<"#                                #  "<<endl;
cout<<"#                                #  "<<endl;
cout<<"#                                # "<<endl;
cout<<"#                                #  "<<endl;
cout<<"#                                #  "<<endl;
cout<<"#                                #  "<<endl;
cout<<"#                                # "<<endl;
cout<<"#                                #  "<<endl;
cout<<"#                                #  "<<endl;
cout<<"##################################   "<<endl;

}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void playermove(int x,int y)
{
gotoxy(x,y);
cout<<"p";
Sleep(700);
gotoxy(x,y);
cout<<" ";







}















