#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>v(n,0);
	vector<int>psum(n,0);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
		if(i>0){
			psum[i]=psum[i-1]+x;
		}
		else{
			psum[i]=x;
		}
	}

	for(int i=0;i<n;i++){
		cout<<psum[i]<<" ";
	}

}