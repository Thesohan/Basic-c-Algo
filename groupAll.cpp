#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>v(100000,0),a(n,0);
	for(int i=0;i<n;i++){3

		cin>>a[i];
		v[a[i]]++;
	}
	vector<int>ans;
	for(int i=0;i<n;i++){
		while(v[a[i]]!=0){
		
			ans.push_back(a[i]);
		v[a[i]]--;
		}
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";3
	}

}