#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int, int);

main()
{
  system("cls");
  cout<<"Text";
  gotoxy(4,7);
  cout<<"Muhammad Saad";
}

void gotoxy(int x ,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

