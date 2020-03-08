#include<bits/stdc++.h>
using namespace std;

int partition(int*,int,int);
void quicksort(int a[],int l, int r)
{
	if(l<r)
	{
		int q=partition(a,l,r);
		quicksort(a,l,q-1);
		quicksort(a,q+1,r);
	}
}

int partition(int a[],int l,int r)
{
	//cout<<"hi ";
	int pivot=a[r],i,q=l;
	for(i=l;i<r;i++)
	{
		if(a[i]<pivot)
		{
			int temp=a[q];
			a[q]=a[i];
			a[i]=temp;
			q++;
		}
	}
	//q++;
	int temp2=a[q];
	a[q]=a[r];
	a[r]=temp2;
	return q;
}

int main()
{
	cout<<"Enter no. of elements:"<<endl;
	int n,i;
	cin>>n;
	int a[n];
	cout<<"Enter elements:\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nInitial Array : [";
	for(i=0;i<n-1;i++)
	{
		cout<<a[i]<<",";
	}
	cout<<a[n-1]<<"]"<<endl<<"Sorted Array  : [";
	quicksort(a,0,n-1);
	for(i=0;i<n-1;i++)
	{
		cout<<a[i]<<",";
	}
	cout<<a[n-1]<<"]"<<endl;
}