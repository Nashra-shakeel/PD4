#include<iostream>
using namespace std;
void flowerShop(int,int,int);
main()
{
int redRose,whiteRose,tulip;
cout<<"Red rose:";
cin>>redRose;
cout<<"White rose:";
cin>>whiteRose;
cout<<"Tulip:";
cin>>tulip;
flowerShop(redRose,whiteRose,tulip);
}

void flowerShop(int redRose,int whiteRose,int tulip)
{
float p1,p2,p3,total;
float price,discount;
p1=redRose*2;
p2=whiteRose*4.10;
p3=tulip*2.50;
total=p1+p2+p3;
if(total>200)
{
price=total*(0.20);
discount=total-price;
}
cout<<"Original price:"<<total<<endl;
cout<<"Price after discount:"<<discount;
}