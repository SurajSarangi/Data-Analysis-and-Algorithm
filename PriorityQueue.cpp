#include<bits/stdc++.h>
using namespace std;

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
	if(l<=n && a[l]>a[max])
		max=l;
	if(r<=n && a[r]>a[max])
		max=r;
	if(max!=i)
	{
		int temp=a[i];
		a[i]=a[max];
		a[max]=temp;
		MaxHeapify(a,max,n);
	}
}

void disp(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"->";
	}
	cout<<a[n]<<endl;
}

void Insert(int a[], int n)
{
	cout<<"Enter element to insert: ";
	int x;
	cin>>x;
	a[n]=x;
	MaxHeapify(a,n/2,n+1);
}

void Delete(int a[], int n)
{
	int x=a[0];
	a[0]=a[n--];
	MaxHeapify(a,0,n);
	cout<<"Element popped: "<<x<<endl;
}

int main()
{
	cout<<"Enter no. of elements:"<<endl;
	int n,i;
	cin>>n;
	int a[100];
	cout<<"Enter elements:\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	MaxHeapify(a,0,n-1);
	while(true)
	{
		cout<<"\n1.Insert\n2.Delete\n3.Display\nEnter your choice:";
		int c;
		cin>>c;

		if(c==1)
		{
			n++;
			Insert(a,n-1);
		}
		else if(c==2)
		{
			Delete(a,n-1);
			n--;
		}
		else
		{
			MaxHeapify(a,0,n);
			disp(a,n-1);
			//break;
		}
	}
}