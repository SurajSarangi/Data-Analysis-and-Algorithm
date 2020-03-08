#include<bits/stdc++.h>
using namespace std;

int main()
{
	printf("Enter no. of elements in array:\n");
	int i,n,x;
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in any order:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	sort(a,a+n);

	cout<<"\nSorted Array : [";
	for(i=0;i<n-1;i++)
		cout<<a[i]<<",";
	cout<<a[i]<<"]"<<endl;

	printf("Enter element to search for: ");
	scanf("%d",&x);
	int l=0,r=n-1,flag=0;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(a[mid]==x)
		{
			printf("%d is present at index %d\n",x,mid+1);
			flag=1;
			break;
		}
		else if(x>a[mid])
		{
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	if(flag==0)
		printf("-1");
	return 0;
}