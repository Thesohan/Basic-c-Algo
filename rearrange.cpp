#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	vector<int>v(n,0);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	while(t--){
		int a,b;
		cin>>a>>b;

		v[a]=v[a]+(v[b]%n)*n;
	}

	for(int i=0;i<n;i++){
		cout<<v[i]/n<<" ";
	}
}