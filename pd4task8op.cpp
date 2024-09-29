 #include<iostream>
#include<windows.h>
using namespace std;
void calculateAggregate(string,float,float,float);
void gotoxy(int,int);
void compareMarks(string,int,string,int);
void printMenu();
main()
{
system("cls");
int ecatm1,ecatm2,choice=0;
float mmarks,imarks,emarks;
string name,names1,names2;
printMenu();
while(choice!=3)
{
cout<<"Enter choice(1,2,3):";
cin>> choice;
 if(choice==1)
{
cout<<"AGGREGATE CALCULATION."<<endl;
cout<<"Enter your name:";
cin>>name;
cout<<"Enter marks."<<endl;
cout<<"Matric:";
cin>>mmarks;
cout<<"Inter:";
cin>>imarks;
cout<<"ECAT:";
cin>>emarks;
calculateAggregate(name,mmarks,imarks,emarks);
}
if(choice==2)
{
cout<<"ASSIGNING ROLL NO."<<endl;
cout<<"Enter first student's name:";
cin>>names1;
cout<<"Enter ECAT marks of first student:";
cin>>ecatm1;
cout<<"Enter second student's name:";
cin>>names2;
cout<<"Enter ECAT marks of second student:";
cin>>ecatm2;
compareMarks(names1,ecatm1,names2,ecatm2);
}
if(choice==3)
{
cout<<"Exiting program";
}
}
}
void printMenu()
{
gotoxy(15,0);
cout<<"#   #   ##   #    #   ###";
gotoxy(15,1);
cout<<"#   #  #  #  ##  ##  ##";
gotoxy(15,2);
cout<<"#   #  ####  # ## #   ###";
gotoxy(15,3);
cout<<"#   #  #  #  #    #     ##";
gotoxy(15,4);
cout<<" ###   #  #  #    #   ###"<<endl;
gotoxy(10,5);
cout<<"1.Calculate aggregate"<<endl;
gotoxy(10,6);
cout<<"2.Compare marks"<<endl;
gotoxy(10,7);
cout<<"3.Exit"<<endl;
}
void calculateAggregate(string name, float mmarks, float imarks, float emarks)
{
float aggregate;
aggregate=(mmarks/1100*100*0.30)+(imarks/550*100*0.30)+(emarks/400*100*0.40);
cout<< aggregate<<endl;
}
void compareMarks(string names1,int ecatm1,string names2,int ecatm2)
{
if(ecatm1>ecatm2)
{
cout<<names1<<"Roll no. 1 is assigned to "<<names1<<endl;
}
if(ecatm1<ecatm2)
{
cout<<"Roll no. 2 is assigned to "<<names2<<endl;
}
}
void gotoxy(int x,int y)
{ 
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}