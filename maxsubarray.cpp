#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int max_so_far=0,sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(sum<0){
			sum=0;
		}
		if(sum>max_so_far){
			max_so_far=sum;
		}
	}
	cout<<max_so_far;
}