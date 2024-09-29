#include<iostream>
using namespace std;
void reverse(string,string);
main()
{
string t,f;
cout<<"Enter 'True' or 'False':";
cin>> t;
reverse(t,f);
}

void reverse(string t,string f)
{
if(t=="True")
{
cout<<"False";
}
if(f=="False")
{
cout<<"True";
}
}