#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int mini=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[mini])
			{
				mini=j;
			}
		}
		if(mini!=i)
		{
			int temp=a[i];
			a[i]=a[mini];
			a[mini]=temp;
		}
	}
}

int main()
{
	int i,n;
	cout<<"Enter no. of elements:"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter elements:\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cout<<"\nInitial Array : [";
	for(i=0;i<n-1;i++)
		cout<<a[i]<<",";
	cout<<a[i]<<"]"<<endl;

	SelectionSort(a,n);

	cout<<"Sorted Array  : [";
	for(i=0;i<n-1;i++)
		cout<<a[i]<<",";
	cout<<a[i]<<"]"<<endl;
	return 0;
}