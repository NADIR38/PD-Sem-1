#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int x,int y);
void printenemy();
void eraseEnemy();
void moveEnemy();
void printplayer();
void eraseplayer();
void moveleft();
void moveright();
int eX=2 , eY=2 ; 
int pX=9 , pY=9;
main()
{
system("cls");
printmaze();
printenemy();
printplayer();
while(true)
{
if(GetAsyncKeyState(VK_LEFT))
{
moveleft();
}
if(GetAsyncKeyState(VK_RIGHT))
{
moveright();
}
moveEnemy();
Sleep(500);
}





}
void printmaze()
{
cout<<"#########################################  "<<endl;
cout<<"#                                       #  "<<endl;
cout<<"#                                       #  "<<endl;
cout<<"#                                       #  "<<endl;
cout<<"#                                       #  "<<endl;
cout<<"#                                       # "<<endl;
cout<<"#                                       #  "<<endl;
cout<<"#                                       #  "<<endl;
cout<<"#                                       #  "<<endl;
cout<<"#                                       # "<<endl;
cout<<"#                                       #  "<<endl;
cout<<"#                                       #  "<<endl;
cout<<"#                                       #  "<<endl;
cout<<"#                                       #  "<<endl;
cout<<"#                                       # "<<endl;
cout<<"#                                       #  "<<endl;
cout<<"#                                       #  "<<endl;
cout<<"######################################### "<<endl;
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
if(eX == 27)
{
eX=2;
}
printenemy();

}
void printplayer()

{

gotoxy(pX,pY);

cout << " /\\ ";

gotoxy(pX, pY+1);

cout << " __/~~\\__ ";

gotoxy(pX, pY+2);

cout << " / | | \\ ";

gotoxy(pX, pY+3);

cout << "=====. .=====";

gotoxy(pX, pY+4);

cout << " |||| ";

}



void eraseplayer()
{
gotoxy(pX,pY);
cout << "  ";
gotoxy(pX, pY+1);
cout << "  ";
gotoxy(pX, pY+2);
cout << "  ";
gotoxy(pX, pY+3);
cout << "  ";
gotoxy(pX, pY+4);
cout << "  ";

}
void moveleft()
{
eraseplayer();
pX=pX-1;
printplayer();
if(pX==1);
{

pX=pX+1;
}
}
void moveright()
{
eraseplayer();
pX=pX+1;
printplayer();
if(pX==27)
{
pX=pX-1;
}
}

