#include<iostream>
using namespace std;
void possibleBonus(int,int);
main()
{
int p1,p2;
cout<<"Enter your position:";
cin>>p1;
cout<<"Enter your friend's position:";
cin>>p2;
possibleBonus(p1,p2);
}

void possibleBonus(int p1,int p2)
{
if(p1+6>=p2)
{
cout<<"True";
}
if(p1+6<p2)
{
cout<<"False";
}
}