#include<iostream>
using namespace std;
void pet(int);
main()
{
int holidays;
cout<<"Holidays:";
cin>> holidays;
pet(holidays);
}

void pet(int holidays)
{
int working,time,diff;
float min;
int hour;
working=(365-holidays);
time=(working*63)+(holidays*127);
if(time>=30000)
{
diff=time-30000;
hour=diff/60;
min=hour%60;
cout<<"Tom will run away"<<endl;
cout<<hour<<" hours and "<<min<<" minutes";
}
if(time<30000)
{
diff=30000-time;
hour=diff/60;
min=hour/60;
cout<<"Tom sleeps well"<<endl;
cout<<hour<<" hours and "<<min<<" minutes";
}
}