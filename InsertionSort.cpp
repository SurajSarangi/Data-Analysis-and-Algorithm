#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int key=a[i],j=i-1;
		/*for(int j=i;j>=0;j--)
		{
			if(key<a[j-1])
			{
				a[j]=a[j-1];
			}
			else
			{
				a[j]=key;
				break;
			}
		}*/
		while(j>=0 && key<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
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

	cout<<"Initial Array : [";
	for(i=0;i<n-1;i++)
		cout<<a[i]<<",";
	cout<<a[i]<<"]"<<endl;

	InsertionSort(a,n);

	cout<<"Sorted Array  : [";
	for(i=0;i<n-1;i++)
		cout<<a[i]<<",";
	cout<<a[i]<<"]"<<endl;
	return 0;
}