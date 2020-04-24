#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    int j=1;
    while(j<=t){
        ll n,b;
        cin>>n>>b;
        vector<int>v(n);
        ll count=0;
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        ll totalCost=0;
        for(int i=0;i<n;i++){
            totalCost+=v[i];
            if(totalCost>b){
                break;
            }
            else{
                count++;
            }
        }
        cout<<"Case #"<<j<<": "<<count<<"\n";
        j++;
    }
}