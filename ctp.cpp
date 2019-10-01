#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a, pair<int,int> b){
	if(a.second>=0 && b.second>=0){
		return a.first<b.first;	
	}
	else if(a.second<0 && b.second<0){
		return a.first+a.second>b.first+b.second;
	}
	return a.second>=0;
}
int main(){
	int n,r;
	cin>>n>>r;
	vector<pair<int,int>> v;
	int reqa,bonus;
	for(int i=0;i<n;i++){
		cin>>reqa>>bonus;
		v.push_back(make_pair(reqa,bonus));
	}

	sort(v.begin(),v.end(),cmp);

for(int i=0;i<n;i++){
	if(r<v[i].first){
		cout<<"NO";
		return 0;
	}
	r+=v[i].second;
}
if(r<0){
	cout<<"NO";
}
else cout<<"YES";
}