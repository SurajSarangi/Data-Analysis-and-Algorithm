#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, i, l, r,mid;
	cin>>n;
	/*for(i=1;i<n/2;i++)
	{
		if(i*i==n)
		{
			cout<<i<<endl;
			break;
		}
	}*/
	l=1;r=n/2;
	while(l<r)
	{
		mid=(l+r)/2;
		if(mid*mid==n)
		{
			cout<<mid<<endl;
			break;
		}
		else if(mid*mid>n)
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
}