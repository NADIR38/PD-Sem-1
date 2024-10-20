#include <iostream>
#include <windows.h>
using namespace std;
void printmaze();
void gotoxy(int x, int y);
void printenemy();
void eraseEnemy();
void moveEnemy();
void printenemy2();
void eraseEnemy2();
void moveEnemy2();
void eraseEnemy3();
void printenemy();
void moveEnemy3();
void eraseplayer();
void printplayer();
void moveleft();
void moveright();
void moveup();
void movedown();
void collision();
int eX = 2, eY = 2;
int pX = 9, pY = 9;
int e2X=9, e2Y=3;
int e3X=10,e3Y=5;
bool down=true;
bool down1=true;
bool down2=true;


main()
{
    system("cls");
    printmaze();
    printplayer();
    printenemy();
    while (true)
    {
         if (GetAsyncKeyState(VK_LEFT))
         {
             moveleft();
         }
         if (GetAsyncKeyState(VK_RIGHT))
         {
             moveright();
        }

         if (GetAsyncKeyState(VK_DOWN))
         {

             movedown();
         }

        if (GetAsyncKeyState(VK_UP))
         {

             moveup();
         }
        moveEnemy();
        moveEnemy2();
        
        Sleep(10);
        
    }
}

void printmaze()
{
    cout << "################################################################################# " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               # " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               # " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               # " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "#                                                                               #  " << endl;
    cout << "################################################################################# " << endl;
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printenemy()
{
    gotoxy(eX, eY);
    cout << "  (~~~) (~~~)";
    gotoxy(eX, eY + 1);
    cout << "  |=| | | |=|";
    gotoxy(eX, eY + 2);
    cout << "  |=| | | |=|";
    gotoxy(eX, eY + 3);
    cout << "      //   /";
    gotoxy(eX, eY + 4);
    cout << "      // /";
}
void eraseEnemy()

{

    gotoxy(eX, eY);
    cout << "              ";
    gotoxy(eX, eY + 1);
    cout << "              ";
    gotoxy(eX, eY + 2);
    cout << "              ";
    gotoxy(eX, eY + 3);
    cout << "              ";
    gotoxy(eX, eY + 4);
    cout << "              ";
    gotoxy(eX, eY + 4);
    cout << "              ";
}
void printenemy2()
{
    gotoxy(e2X, e2Y);
    cout << "  (~~~) (~~~)";
    gotoxy(e2X, e2Y + 1);
    cout << "  |=| | | |=|";
    gotoxy(e2X, e2Y + 2);
    cout << "  |=| | | |=|";
    gotoxy(e2X, e2Y + 3);
    cout << "      //   /";
    gotoxy(e2X, e2Y + 4);
    cout << "      // /";
}
void eraseEnemy2()

{

    gotoxy(e2X, e2Y);
    cout << "              ";
    gotoxy(e2X, e2Y + 1);
    cout << "              ";
    gotoxy(e2X, e2Y + 2);
    cout << "              ";
    gotoxy(e2X, e2Y + 3);
    cout << "              ";
    gotoxy(e2X, e2Y + 4);
    cout << "              ";
    gotoxy(e2X, e2Y + 4);
    cout << "              ";
}
void printenemy3()
{
    gotoxy(e3X, e3Y);
    cout << "  (~~~) (~~~)";
    gotoxy(e3X, e3Y + 1);
    cout << "  |=| | | |=|";
    gotoxy(e3X, e3Y + 2);
    cout << "  |=| | | |=|";
    gotoxy(e3X, e3Y + 3);
    cout << "      //   /";
    gotoxy(e3X, e3Y + 4);
    cout << "      // /";
}
void eraseEnemy3()

{

    gotoxy(e3X, e3Y);
    cout << "              ";
    gotoxy(e3X, e3Y + 1);
    cout << "              ";
    gotoxy(e3X, e3Y + 2);
    cout << "              ";
    gotoxy(e3X, e3Y + 3);
    cout << "              ";
    gotoxy(e3X, e3Y + 4);
    cout << "              ";
    gotoxy(e3X, e3Y + 4);
    cout << "              ";
}
void moveEnemy()
{
  eraseEnemy();
  if (down)
  {
   eX++; 
  }
  else
  {
eX--;
  }
   if(eX==50)
  {
down=false;
  }
  else if(eX==18)
  {
   down=true; 
  }
printenemy(); 
}
void moveEnemy2()
{
  eraseEnemy2();
  if (down1)
  {
   e2Y++; 
  }
  else
  {
e2Y--;
  }
   if(e2Y==13)
  {
down1=false;
  }
  else if(e2Y==2)
  {
   down1=true; 
  }
printenemy2(); 
}
void moveEnemy3()
{

  eraseEnemy3();
  if(down2)
  {
   e3Y--; 
  }
  else
  {
e3Y++;
  }
   if(e3Y==5)
  {
down2=false;
  }
  else if(e3Y==10)
  {
   down2=true; 
  }
printenemy3(); 
}
void eraseplayer()
{
    gotoxy(pX + 2, pY);
    cout << "           ";
    gotoxy(pX - 1, pY + 1);
    cout << "           ";
    gotoxy(pX - 1, pY + 2);
    cout << "          ";
    gotoxy(pX, pY + 3);
    cout << "             ";
    gotoxy(pX + 1, pY + 4);
    cout << "          ";
    gotoxy(pX, pY + 5);
    cout << "          ";
}
void printplayer()

{

    gotoxy(pX + 2, pY);
    cout << " /\\ ";
    gotoxy(pX - 1, pY + 1);
    cout << " __/~~\\__ ";
    gotoxy(pX - 1, pY + 2);
    cout << "  | | | |";
    gotoxy(pX, pY + 3);
    cout << "===. .===";

    gotoxy(pX + 1, pY + 4);
    cout << " |||| ";
}
void moveleft()
{
    eraseplayer();
    printplayer();
    pX = pX - 1;
    printplayer();
    if (pX == 2)
    {

        pX = pX + 1;
    }
}
void moveright()
{
    eraseplayer();
    pX = pX + 1;
    printplayer();
    printplayer();
    if (pX == 55)
    {
        pX = pX - 1;
    }
}
void moveup()
{
    eraseplayer();
    pY = pY - 1;
    printplayer();
    if (pY == 3)
    {
        pY = pY + 1;
    }
}
void movedown()
{
    eraseplayer();
    pY = pY + 1;
    if (pY == 20)
    {
        pY = pY - 1;
    }
    printplayer();
}
