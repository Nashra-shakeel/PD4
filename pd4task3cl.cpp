#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printmaze();
void moveplayer(int,int);
main()
{
 int x=4,y=4;
 system("cls");
 printmaze();
 moveplayer(x,y);
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
