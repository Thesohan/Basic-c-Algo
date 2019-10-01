#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int temp[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==0){
			temp[i]=a[i];
		}
		else{
			temp[i]=temp[i-1]+a[i];
		}
	}
	while(true){
		
		int i,j;
		cin>>i>>j;
		if(i!=0)
			cout<<abs(temp[i-1]-temp[j])<<"\n";
		else
			cout<<temp[j]<<"\n";



	}
	
}