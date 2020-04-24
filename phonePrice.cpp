#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,ans=1;
	    cin>>n;
	    int v[n];
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        int curMin=INT_MAX;
	        for(int j=max(0,i-5);j<i;j++){
	            	curMin=min(curMin,v[j]);
	           	cout<<curMin<<" "<<v[i-j];
	        }
	        cout<<"\n";
	        if(curMin>v[i]){
	            ans++;
	        }
	    }
	    cout<<ans<<"\n";
	}
}
