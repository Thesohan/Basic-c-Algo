#include<bits/stdc++.h>
// #include "boost/algorithm/string.hpp"
    #define ll long long int
using namespace std;
// using names      pace boost;
int temp[1001][1001]={0},a[1000];

int fun(int i,int j){
    if(i==j){
        return temp[i][j];
    }
    else{
        if(temp[i][j]==0)
            temp[i][j]= a[i]*(fun(i+1,j))+a[j]*(fun(i,j-1));
        return temp[i][j];
    }
}
int main()
{
// ios::sync_with_stdio(false);
// cin.tie(false);
int n,q;
cin>>n>>q;
for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++)
    temp[i][j]=0;
}
for(int i=1;i<=n;i++){
    int b;
    cin>>b;
    a[i]=b;
    temp[i][i]=a[i];
}
while(q--){
    int l,r,ans=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        for(int j=l;j<=r;j++)
            ans+=fun(i,j);
            cout<<ans<<"i,j"<<i<<" "<<"\n";
    }
    cout<<ans<<"\n";
}

}