#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	// cout<<endl<<a[0]<<"hi";
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

	BubbleSort(a,n);
	
	cout<<"Sorted Array  : [";
	for(i=0;i<n-1;i++)
		cout<<a[i]<<",";
	cout<<a[i]<<"]"<<endl;
	return 0;
}