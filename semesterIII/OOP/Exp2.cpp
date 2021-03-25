#include <iostream>
using namespace std;
int main()
{
 int l,b,h,r;
 cout<<"Enter length l , bredth/base b, height h, and radius r"<<endl;
 cin>>l>>b>>h>>r;
 cout<<" 1.area of circle "<<endl;
 cout<<" 2.area of rectangle "<<endl;
 cout<<" 3.area of triangle "<<endl;
 cout<<" enter choice "<<endl;
 int choice;
 cin>>choice;
 switch (choice)
 {
 case 1:
 cout<<"area of circle="<<3.14*r*r;
 break;
 case 2:
 cout<<"area of rectangle="<<l*b;
 break;
 case 3:
 cout<<"area of triangle="<<0.5*b*h;
 break;
 default:
 cout<<"Wrong choice";
 break;
 }
 return 0;
}
