#include<bits/stdc++.h>
using namespace std;

void kSort(int *a, int n, int k)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+k])
		{
			int x=a[i];
			a[i]=a[i+k];
			a[i+k]=x;
		}
		else if(a[i]<a[i-k])
		{
			int x=a[i];
			a[i]=a[i-k];
			a[i-k]=x;
		}
	}
}

int main()
{
	//a[]={3,4,1,2,7,8,5,6}
	//a[]={2,1,4,3,6,5,8,7,10,9},k=1;
	int a[]={2,1,4,3,6,5,8,7,10,9},k,i;
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"\n\nInitial Array:\n[";
	for(i=0;i<n-1;i++)
	{
		cout<<a[i]<<",";
	}
	cout<<a[n-1]<<"]"<<endl<<"\n\nEnter k:"<<endl;
	cin>>k;

	kSort(a,n,k);
	
	cout<<"\n\nSorted Array:\n[";
	for(i=0;i<n-1;i++)
	{
		cout<<a[i]<<",";
	}
	cout<<a[n-1]<<"]"<<endl;
}