#include<bits/stdc++.h>
#include "boost/algorithm/string.hpp"
#define ll long long int
#define loop(i,m) for(i=0;i<m;i++)
#define MP make_pair
using namespace std;
using namespace boost;
ll getSum(vector<ll> a,ll c){
    ll i,sum=0;
    loop(i,a.size()){
        sum+=abs(a[i]-a[c]);
    }
    return sum;
    
}
// ll min(ll a,ll b){
//     if(a>b)
//     return b;
//     else return a;
// }
int main()
{
    // ios::sync_with_stdio(false);    
    // cin.tie(false);
    ll i,n,k;
    cin>>n>>k;
    
    vector<ll> a;
    loop(i,n){
        ll z;
        cin>>z;
        a.push_back(z);
    }
    ll mean=0,c=INT_MAX;
    loop(i,n){
        mean+=a[i];
    }
    mean/=n;
    
    loop(i,n){
        if(a[c]<abs(mean-a[i])){
            c=i;
        }
    }
    ll j;
    
    loop(j,k){
        ll zero=-1;
        loop(i,n){
            if(a[i]-a[c]>=1){
                a[i]-=1;
                break;
            }
            else if(a[i]-a[c]<0){
                a[i]+=1;
                break;
            }
            else if(a[i]-a[c]==0){
                zero=i;
                continue;
            }
            
        }
        if(zero!=-1){
            a[zero]+=1;
            zero=-1;
        }
        
    }
    
    cout<<getSum(a,c)<<" "<<c+1;
    
    
}
