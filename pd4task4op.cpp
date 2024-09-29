#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
main()
{
system("cls");
gotoxy(15,0);
cout<<"#    #    ##   ###   #   #   ###    ##     "<<endl;
gotoxy(15,1);
cout<<"##   #   #  # ##     #   #   #  #  #  #    "<<endl;
gotoxy(15,2);
cout<<"# #  #   ####  ###   #####   ###   ####  "<<endl;
gotoxy(15,3);
cout<<"#  # #   #  #    ##  #   #   ##    #  #  "<<endl;
gotoxy(15,4);
cout<<"#    #   #  #  ###   #   #   # #   #  # "<<endl;
} 

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}