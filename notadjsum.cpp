#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n,0);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	vector<int>dp[2];
	dp[0].push_back(v[0]);//inclusive
	dp[1].push_back(0);//exclusive
	for(int i=1;i<n;i++){
		dp[0].push_back(v[i]+dp[1][i-1]);
		dp[1].push_back(max(dp[0][i-1],dp[1][i-1]));
	}

	for(int i=0;i<n;i++){
		cout<<dp[0][i];
	}
	cout<<"\n";
	for(int i=0;i<n;i++){
		cout<<dp[1][i];
	}
	cout<<"\n";
	cout<<max(dp[0][n-1],dp[1][n-1]);
}