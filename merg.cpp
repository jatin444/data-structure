#include<iostream>
using namespace std;
int  main()
{
	int ar1[10],ar2[10],i,j,m,n,mrg;
	cout<<"enter array 1 size";
	cin>>m;
	cout<<"enter array 2 size";
	cin>>n;
	cout<<"enter array 1:elements";
	for(i=0;i<m;i++)
	{
		cin>>ar1[i];
	}
	cout<<"enter array 2 elements";
	for(j=0;j<n;j++) 
	{
		cin>>ar2[j];
	}
	i=m;
	j=0;
	mrg=m+n;
	for(i=m;i<mrg;i++)
	{
		ar1[i]=ar2[j];
		j++;
	}
	cout<<"new elements after merging"<<endl;
	for(i=0;i<mrg;i++)
	{
		cout<<""<<ar1[i]<<"";
	}
	
	return 0;
}
	
	
	
