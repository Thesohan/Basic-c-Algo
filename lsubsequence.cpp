#include<bits/stdc++.h>
using namespace std;
#define loo(i,n) for(i=0;i<n;i++)
int main(){
	int n,i,j;
	cin>>n;
	int a[n];
	loo(i,n){
		cin>>a[i];
	}
	int temp[1000000];
	memset(temp,0,sizeof(temp));
	int cmax=0,length,maxlenght=0;
	loo(j,n){
		length=0;
			loo(i,n){
				if(temp[a[i]]!=1 && cmax<a[i]){
					length++;
					temp[a[i]]++;
				}
			}
			maxlenght=max(maxlenght,length);
	
	}
	cout<<maxlenght; 9
}