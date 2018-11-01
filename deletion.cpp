#include<iostream>
using namespace std;
int  main()
{
	int i,a[5],no,pos;
	cout<<"enter data in array:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<endl<<"stored data in array";
	for(i=0;i<5;i++)
	{
		cout<<a[i];
	}
	cout<<endl<<"enter pos of lement to delete";
	cin>>pos;
	if(pos>5)
	{
		cout<<endl<<"this value is out of range";
	 } 
	 else
	 {
	 	--pos;
	 	for(i=pos;i<=4;i++)
	 	{
		 a[i]=a[i+1];
		 }
		 cout<<endl<<"new data in array";
		 for(i=0;i<4;i++)
		 {
	 		cout<<a[i];
		 }
	 }
	 return 0;
	 
}
