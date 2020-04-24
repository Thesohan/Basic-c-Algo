#include<bits/stdc++.h>
using namespace std;
#define mod 10000003

int sum(vector<int>&v,int start,int end){
    int s=0;
    for(int i=start;i<=end;i++){
        s+=v[i]%mod;
    }
    return s;
}
int getAns(vector<int>&v,int n,int k){
    cout<<n<<"k"<<k<<"  ";
    if(k==1){
        return sum(v,0,n-1);
    }
    if(n==1){
        return v[0];
    }
    int best = INT_MAX;
    for(int i=1;i<=n;i++){
        cout<<"sohan"<<" ";
        best=min(best,max(getAns(v,i,k-1),sum(v,i,n-1)))%mod;
    }
    return best;
}
int main(){
	vector<int>v(2);
	v[0]=1;
	v[1]=10;
	cout<<getAns(v,v.size(),2)*5%mod;
}