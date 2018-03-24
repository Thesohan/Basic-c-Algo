#include<iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
void heapify(int a[],int n,int i)
{
	int largest=i;
	int l=2*i+1,r=2*i+2;
	if(l<n&&a[l]>a[largest])
		largest=l;
	if(r<n&&a[r]>a[largest])
		largest=r;
	if(largest!=i)
	{
		swap(a[i],a[largest]);
		heapify(a,n,largest);
	}
}
void heapSort(int a[],int n)
{
	for(int i=n/2;i>=0;i--)
		heapify(a,n,i);
	for(int i=n-1;i>=0;i--)
	{
		swap(a[i],a[0]);
		heapify(a,i,0);
	}
}
int main()
{
	int n;
	cout<<"enter no. of elemets\n";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
    heapSort(arr, n);
    cout << "Sorted array is \n";
    printArray(arr, n);
}
