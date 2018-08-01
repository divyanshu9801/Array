#include<iostream>
using namespace std;

int main()
{
int i,n,j,temp;
cout<<"Enter the size of the array "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of the array:- "<<endl;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"Element of the array are:-"<<endl;
for(i=0;i<n;i++)
{
cout<<arr[i]<<"   ";
}

for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if (arr[j]>arr[j+1])
{
arr[j+1]=temp;
arr[j+1]=arr[j];
arr[j]=temp;
}
}
}
cout<<"Elements of the array is sorted order are"<<endl;

for(i=0;i<n;i++)
{
cout<<arr[i]<<"   ";
}

}
