#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;
	vector<int>a(26,0);
	cin>>n>>k;
	for(int i=0;i<n;i++){
		char chr;
		cin>>chr;
		a[chr-'A']++;
	}
	sort(a.begin(),a.end(),greater<int>());
	long long s,ans=0;
	for(int i=0;i<26;i++){
		if(k<=0 || a[i]==0)break;
		s=min(k,a[i]);
			ans+=s*s;
			k-=s;
	}
	cout<<ans;
}