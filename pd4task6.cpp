#include<iostream>
using namespace std;
void longestTime(int,int);
main()
{
int h,m;
cout<<"Enter the number of hours:";
cin>>h;
cout<<"Enter the number of minutes:";
cin>>m;
longestTime(h,m);
}

void longestTime(int h,int m)
{
int hm;
hm=h*60;
if(hm>m)
{
cout<<h;
}
if(hm<m)
{
cout<<m;
}
}