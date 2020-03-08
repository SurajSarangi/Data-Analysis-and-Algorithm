#include<stdio.h>

void Merge(int*,int,int,int);
void MergeSort(int a[],int l, int r)
{
	if(l<r)
	{
		int mid=l+(r-l)/2;
		MergeSort(a,l,mid);
		MergeSort(a,mid+1,r);
		Merge(a,l,mid,r);
	}
}

void Merge(int a[], int l, int mid, int r) 
{ 
	int i,j,k; 
	int ll=mid-l+1; 
	int rl=r-mid; 
	int la[ll],ra[rl]; 

	for(i=0;i<ll;i++) 
		la[i]=a[l+i]; 
	for(i=0;i<rl;i++) 
		ra[i]=a[mid + 1+ i]; 

	i=0;j=0;k=l;
	while(i<ll && j<rl) 
	{ 
		if(la[i]<=ra[j]) 
			a[k++]=la[i++];
		else
			a[k++]=ra[j++];
	} 
	while (i < ll)
		a[k++] = la[i++]; 
	while (j < rl)
		a[k++] = ra[j++]; 
} 


int main()
{
	printf("Enter no. of elements:\n");
	int n,i;
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nInitial Array : [");
	for(i=0;i<n-1;i++)
	{
		printf("%d,",a[i]);
	}
	printf("%d]\nSorted Array  : [",a[n-1]);
	MergeSort(a,0,n-1);
	for(i=0;i<n-1;i++)
	{
		printf("%d,",a[i]);
	}
	printf("%d]\n",a[n-1]);
	return 0;
}