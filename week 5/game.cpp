#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void printenemy();
void eraseEnemy();
void moveEnemy();
void gotoxy(int x,int y);
int eX=2 , eY=2;
main()
{
system("cls");
printmaze();
printenemy();
while(true)
{
moveEnemy();
Sleep(500);
}





}
void printmaze()
{
cout<<"##################################  "<<endl;
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
cout<<"################################## "<<endl;
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void printenemy()
{
gotoxy(eX,eY);
cout<<"  (~~~) (~~~)";
gotoxy(eX,eY+1);
cout<<"  |=| | | |=|";
gotoxy(eX,eY+2);
cout<<"  |=| | | |=|";
gotoxy(eX,eY+3);
cout<<"      //   /";
gotoxy(eX,eY+4);
cout<<"      // /";


}
void eraseEnemy()

{

gotoxy(eX,eY);
cout << " ";
gotoxy(eX,eY+1);
cout << " ";
gotoxy(eX,eY+2);
cout << " ";
gotoxy(eX,eY+3);
cout << " ";
gotoxy(eX,eY+4);
cout << " ";
}
void moveEnemy()

{

eraseEnemy();
eX = eX + 1;
if(eX == 15)
{
eX=2;
}
printenemy();

}





