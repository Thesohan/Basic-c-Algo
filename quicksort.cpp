#include<bits/stdc++.h>
using namespace std;
int n;
int partition(int a[],int f,int l)
{
	int i=f-1,j;
	for(j=f;j<l;j++)
	{
		if(a[j]<=a[l])
         	swap(a[++i],a[j]);
             for(int s=0;s<n;s++)
               cout<<a[s]<<"\t";
cout<<"\n\n";
    }
swap(a[++i],a[l]);    
	return(i);
}
void quicksort(int a[],int i,int l)
{
	if(i<l)
	{
		int p=partition(a,i,l);
		quicksort(a,i,p-1);
		quicksort(a,p+1,l);
	}
}

int main()
{
	int i;
	cin>>n;
int a[n];
for(i=0;i<n;i++)
	cin>>a[i];
quicksort(a,0,n-1);
for(i=0;i<n;i++)
cout<<a[i]<<" ";
}
