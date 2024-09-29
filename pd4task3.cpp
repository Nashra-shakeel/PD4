#include<iostream>
using namespace std;
void discount(string,int);
main()
{
string name;
int price;
cout<<"Enter the country's name:";
cin>> name;
cout<<"Enter ticket price in dollars:$";
cin>> price;
discount(name,price);
}

void discount(string name,int price)
{
int discount;
int total;
if(name=="Pakistan")
{
discount=price*(0.05);
total=price-discount;
cout<<"Final ticket price after discount:$"<<total;
}
if(name=="Ireland")
{
discount=price*(0.10);
total=price-discount;
cout<<"Final ticket price after discount:$"<<total;
}
if(name=="India")
{
discount=price*(0.20);
total=price-discount;
cout<<"Final ticket price after discount:$"<<total;
}
if(name=="England")
{
discount=price*(0.30);
total=price-discount;
cout<<"Final ticket price after discount:$"<<total;
}
if(name=="Canada")
{
discount=price*(0.45);
total=price-discount;
cout<<"Final ticket price after discount:$"<<total;
}

}