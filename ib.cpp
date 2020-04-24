#include<bits/stdc++.h>
using namespace std;
#define mod 11

long long factorial(long long n){
    long long fact=1;
    for(int i=1;i<=n;i++){
        cout<<fact<<" ";
        fact*=i%mod;
    }
    cout<<"Fact "<<fact<<"**";
    return fact;
}

int powerr(int base,int exponent)
{
    // if(exponent<0) exponent+=mod-1;
    cout<<mod<<"Mod\n";
    int ans=1;
    while(exponent>0){
        cout<<exponent<<" ";
        if(exponent %2!=0){
         ans=(ans*base)%mod;   
        }
        base=(base*base)%mod;
        exponent/=2;
        cout<<"ans "<<ans<<"\n";
    }
    return ans;
}
long long solve(int A, vector<int> &B) {
    long long unvisited = A-B.size();
    long long nk = factorial(unvisited);
    vector<int>v(B.size()+2);
    v.push_back(B[0]-1);
    for(int i=0;i<B.size()-1;i++){
        v.push_back(B[i+1]-B[i]);
    }
    v.push_back(A-B[B.size()-1]);
    long long sum=0;
    for(int i=0;i<v.size();i++){
        nk = nk/factorial(v[i]);
        sum+=v[i]-1;
    }
    // cout<<"sum"<<sum<<"\n";
    nk = nk*powerr(2,sum)%mod;
    return nk;
    
}
int main(){
    int a,n;
    cin>>a;
    cin>>n;
        vector<int>b(n,0);

    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    // cout<<"haf";
    ///(31/3)%mod=1
    /// 9*i%mod;
    cout<<9*(powerr(3,mod-2))%mod;
    // cout<<solve(a,b);
}
