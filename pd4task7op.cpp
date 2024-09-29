#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void maze();
void movePlayer(int,int);
main()
{
int x=14;
int y=2;
system("cls");
maze();
gotoxy(x,y);
while(true)
{
  movePlayer(x,y);
  y=y+1;
  if(y==13)
  {
   y=2;
  }
}
}
void maze()
{
cout<<"|||||||||||||||||||||||||||||||||||||"<<endl;
cout<<"||                                 ||"<<endl;
cout<<"||                                 ||"<<endl;
cout<<"||                                 ||"<<endl;
cout<<"||                                 ||"<<endl;
cout<<"||                                 ||"<<endl;
cout<<"||                                 ||"<<endl;
cout<<"||                                 ||"<<endl;
cout<<"||                                 ||"<<endl;
cout<<"||                                 ||"<<endl;
cout<<"||                                 ||"<<endl;
cout<<"||                                 ||"<<endl;
cout<<"||                                 ||"<<endl;
cout<<"|||||||||||||||||||||||||||||||||||||"<<endl;
}
void movePlayer(int x,int y)
{
gotoxy(x,y);
cout<<"P";
Sleep(100);
gotoxy(x,y);
cout<<" ";
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}