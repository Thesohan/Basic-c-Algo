#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin>>n;
	unordered_map<int,int> mp;
	ll a[]={4,8,15,16,23,42};
	ll b[50]={0};
	for(ll i=0;i<n;i++){
		ll x;
		cin>>x;
		for(int i=0;i<6;i++){
			if(x==a[i]&& i!=0 ){
				if(b[a[i-1]]==b[a[i]]-1){
					b[a[i]]++;
				}

			}
		}
	}

	ll c=INT_MAX;
	for(int i=0;i<6;i++){
		c=min(c,b[a[i]]);
	}
	if(c<=0){
		cout<<n;
	}
	else
		cout<<n-6*c;
}
