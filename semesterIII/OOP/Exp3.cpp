#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
 int n;
 int arr[n];
 cout<<"Enter the array size"<<endl;
 cin>>n;
 for(int i=0; i<n; i++)
 {
 cin>>arr[i];
 }
 sort(arr,arr+n);
 cout<<"Sorted array"<<endl;
 for(int i=0; i<n; i++)
 {
 cout<<arr[i];
 }
 return 0;
}