#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void moveplayer(int,int);
void printmaze();
main()
{
int x=2,y=7;
system("cls");
printmaze();
while(true)
{
 moveplayer(x,y);
 x=x+1;
 if(x==35)
{
 x=2;
}
}
}
void printmaze()
{
cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
cout<<"||                                   ||"<<endl;
cout<<"||                                   ||"<<endl;
cout<<"||                                   ||"<<endl;
cout<<"||                                   ||"<<endl;
cout<<"||                                   ||"<<endl;
cout<<"||                                   ||"<<endl;
cout<<"||                                   ||"<<endl;
cout<<"||                                   ||"<<endl;
cout<<"||                                   ||"<<endl;
cout<<"||                                   ||"<<endl;
cout<<"||                                   ||"<<endl;
cout<<"||                                   ||"<<endl;
cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
}
void moveplayer(int x,int y)
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