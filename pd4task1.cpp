#include<iostream>
using namespace std;
void equal(int,int);
main()
{
int n1,n2;
cout<<"Enter the first number:";
cin>> n1;
cout<<"Enter the second number:";
cin>> n2;
equal(n1,n2);
}

void equal(int n1,int n2)
{
if(n1==n2)
{
cout<<"True";
}
if(n1!=n2)
{
cout<<"False";
}
}