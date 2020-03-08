#include<bits/stdc++.h>
using namespace std;

void HeapSort(int*,int);
void MaxHeapify(int*, int, int);
void BuildHeap(int a[], int n)
{
	for(int i=n/2;i>=0;i--)
	{
		MaxHeapify(a,i,n);
	}
}

void MaxHeapify(int a[],int i, int n)
{
	int l=2*i+1, r=2*i+2, max=i;
	if(l<n && a[l]>a[max])
		max=l;
	if(r<n && a[r]>a[max])
		max=r;
	if(max!=i)
	{
		int temp=a[i];
		a[i]=a[max];
		a[max]=temp;
		MaxHeapify(a,max,n);
	}
}

void HeapSort(int a[], int n)
{
	for(int i=n;i>=0;i--)
	{
		int temp=a[i];
		a[i]=a[0];
		a[0]=temp;
		MaxHeapify(a,0,i);
	}
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
	
	BuildHeap(a,n-1);
	HeapSort(a,n-1);

	for(i=0;i<n-1;i++)
	{
		cout<<a[i]<<",";
	}
	cout<<a[n-1]<<"]"<<endl;
}