#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>v(n,0);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int a=0,b=n-1;
	while(a<b){
		cout<<"haha"; 
		if(v[a]%2!=0){
			while(v[b]%2!=0 && b>=0){
				b--;
			}

		}
		else if(v[b]%2==0){
			while(v[a]%2==0 && a<n){
				a++;
			}
		}
		if(a<b){
			swap(v[a],v[b]);
		}
	}

	for(int i=0;i<n;i++){
		cout<<v[i];
	}
}