#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{ int ser,num;
 int rec;
 int x;
 int pos=0;
 cout<<"Creating database"<<endl;
 int arr[50]={91,96,94,97,92,99,100,93,95,98};
 cout<<"display Database"<<endl;
 for(int i=0; i<10; i++)
 {
 cout<<'\t'<<arr[i]<<endl;
 }
 cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
 cout<<"modifying array as sorting"<<endl;
 sort(arr,arr+10);
 for(int i=0; i<10; i++)
 {
 cout<<'\t'<<arr[i]<<endl;
 }
 cout<<"-------------------------------------------------------------------------------------------------------------"<<endl;
 cout<<"Enter the position to be searched"<<endl;
 cin>>ser;
 if(ser>10)
 {
 cout<<"invalid position"<<endl;
 }
 else
 {
 cout<<"your Element:"<<arr[ser-1]<<endl;
 }
 cout<<"-------------------------------------------------------------------------------------------------------------"<<endl;
 cout<<"delete record"<<endl;
 cout<<"Enter the element to be deleted"<<endl;
 cin>>num;
 cout<<"Updated array will be: "<<endl;
 for(int i=0; i<10; i++)
 {
 if(arr[i]!=num)
 {
 cout<<'\t'<<arr[i];
 }
 }
 cout<<""<<endl;
 cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
 cout<<"insert record to be added in array"<<endl;
 cout<<"\nEnter element to insert:";
cin>>x;
for(int i=0;i<11;++i)
if(arr[i]<=x&&x<arr[i+1])
{
pos=i+1;
break;
}
for(int i=11;i>pos;--i)
arr[i]=arr[i-1];
arr[pos]=x;
for(int i=0; i<11; i++)
 {
 cout<<'\t'<<arr[i]<<endl;
 }
cout<<"-------------------------------------------------------------------------------------------------------------"<<endl;
 return 0;
}