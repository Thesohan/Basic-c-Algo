#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<int> v;
		for(ll i=0;i<n;i++){
			ll x;
			cin>>x;
			v.push_back(x);
		}

		ll sum=0,c=0;
		for(ll i=0;i<v.size();i++){
			if(v[i]%3!=0){
				sum+=v[i]%3;
				
			}
			else{
				c++;
			}
		}
		// cout<<c<<sum;
		cout<<c+(sum/3)<<"\n";
	}

}