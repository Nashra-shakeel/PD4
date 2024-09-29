#include<iostream>
using namespace std;
void tpChecker(int,int);
main()
{
int people,tp;
cout<<"Number of people in the household:";
cin>> people;
cout<<"Number of rolls of TP:";
cin>>tp;
tpChecker(people,tp);
}

void tpChecker(int people,int tp)
{
int rolls,use,average;
rolls=tp*500;
use=people*57;
average=rolls/use;
if (average<=5)
{
cout<<"Your TP will only last "<<average<<" days,buy more!";
}
if(average>5)
{
cout<<"Your tp will last "<<average<<" days,no need to panic!";
}
}