#include<iomanip>
#include<iostream>
using namespace std;
class weather
{
public:
 int s_no[31],days[31];
 float temp_h[31],temp_l[31];
 float amt_rain[31],amt_snow[31];
 int no_of_days;
 weather()
{
 int yy,mm;
 cout<<"\nEnter the year..: ";
 cin>>yy;
 cout<<"\nEnter the month.."<<endl;
 cin>>mm;
 no_of_days=leap(yy,mm);
 for(int i=0;i<no_of_days;i++)
 {
 s_no[i]=i+1;
 days[i]=99;
 temp_h[i]=999;
 temp_l[i]=-999;
 amt_rain[i]=0;
 amt_snow[i]=0;
}
}
 void data();
 void display();
 int leap(int,int);
};
void weather::data()
{
int day;
char ch;
do
{
cout<<"\nEnter the day of the month:";
cin>>day;
if(day>0&&day<=no_of_days)
{
days[day-1]=day;
cout<<"\nEnter the high temperature(in degrees):";
cin>>temp_h[day-1];
cout<<"\nEnter the low temperature(in degrees):";
cin>>temp_l[day-1];
cout<<"\nEnter the amount of snow(mm):";
cin>>amt_snow[day-1];
cout<<"\nEnter the amount of rain(cm):";
cin>>amt_rain[day-1];
cout<<"\nTHE ENTRY IS UPDATED SUCCESSFULLY..."<<endl;
}
else
 cout<<"\nEnter a valid day!!";
cout<<"\nDo You Want to enter more records??(y/n)";
cin>>ch;
}
while(ch=='y'||ch=='Y');
}
int weather::leap(int yy,int mm)
{
 if(((yy%4==0) && !(yy%100==0)) || (yy%400 == 0))
 { cout<<yy<<"\t is a leap year!!"<<endl;
 if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
 { cout<<"The month has 31 days...";
 return(31);
 }
 else if(mm==4||mm==6||mm==9||mm==11)
 {
 cout<<"The month has 31 days...";
 return(30);
 }
 else
 {
 cout<<"The month has 29 days...";
 return 29;
 }
 }
 else
 {
 cout<<yy<<"\t is not a leap year"<<endl;
 if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
 {
 cout<<"The month has 31 days...";
 return(31);
 }
 else if(mm==4||mm==6||mm==9||mm==11)
 {
 cout<<"The month has 31 days...";
 return(30);
 }
 else
 {
 cout<<"The month has 28 days...";
 return(28);
 }
 }
}
void weather::display()
{
 double avg_h=0.0,avg_l=0.0,avg_snow=0.0,avg_rain=0.0,avg_days=0.0;
 for(int i=0;i<no_of_days;i++)
 {
 avg_h=avg_h+temp_h[i];
 avg_l=avg_l+temp_l[i];
 avg_snow=avg_snow+amt_snow[i];
 avg_rain=avg_rain+amt_rain[i];
 avg_days=avg_days+days[i];
 }
 avg_h=avg_h/no_of_days;
 avg_l=avg_l/no_of_days;
 avg_snow=avg_snow/no_of_days;
 avg_rain=avg_rain/no_of_days;
 avg_days=avg_days/no_of_days;
 cout<<setw(10)<<"serial_no";
 cout<<setw(10)<<"Day";
 cout<<setw(10)<<"amt_rain";
 cout<<setw(10)<<"amt_snow";
 cout<<setw(10)<<"high_temp";
 cout<<setw(10)<<"low_temp"<<endl;
 for(int i=0;i<no_of_days;i++)
 {
 cout<<setw(10)<<s_no[i];
 cout<<setw(10)<<days[i];
 cout<<setw(10)<<amt_rain[i];
 cout<<setw(10)<<amt_snow[i];
 cout<<setw(10)<<temp_h[i];
 cout<<setw(10)<<temp_l[i]<<endl;
 }

cout<<setw(10)<<"AVERAGE"<<"\t"<<avg_days<<"\t"<<avg_rain<<"\t"<<avg_snow<<"\t"<<avg_h<<
"\t"<<avg_l;
}
int main()
{
 int ch;
 weather w;
 do
 {
 cout<<"\n1.Enter the data records:"<<endl;
 cout<<"2.Display the weather report"<<endl;
 cout<<"3.Exit"<<endl;
 cout<<"Enter your choice: ";
 cin>>ch;
 switch(ch)
 {
 case 1:w.data();
 break;
 case 2:w.display();
 break;
 case 3:break;
 }
 }while(ch!=3);
 return 0;
}