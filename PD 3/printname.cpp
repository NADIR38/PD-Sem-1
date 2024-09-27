#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
main()
{
system("cls");
cout<<"test";
gotoxy(20,20);
cout<<"my name is nadir";


}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates); 


}