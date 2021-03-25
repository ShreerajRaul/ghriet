#include <iostream>
#include <math.h>
using namespace std;
int main()
{
 int a,b,c;
 cout<<"Enter the coefficient of quadratic equation ax^2+bx+c=0"<<endl;
 cin>>a>>b>>c;
 int d;
 float r1,r2;
 d=(b*b)-(4*a*c);
 int e=2*a;
 if(d>0)
 {
 cout<<"Roots r1 & r2 are real and unequal"<<endl;
 r1=(-b+sqrt(d))/e;
 r2=(-b-sqrt(d))/e;
 cout<<"r1="<<r1<<endl;
 cout<<"r2="<<r2<<endl;
 }
 else if(d==0)
 {
 cout<<"Roots are real and equal"<<endl;
 r1=-b/e;
 r2=-b/e;
 cout<<"r1=r2="<<r1<<endl;
 }
 else{
 cout<<"Roots are imaginary";
 }
 return 0;
}
