#include<bits/stdc++.h>
// #include "boost/algorithm/string.hpp"
#define ll long long int
#define N 100000
using namespace std;
// using namespace boost;
vector<int> temp[N];
int cfild=1;

void addIntoTemp(int b[],int l){
 // cout<<"count="<<cfild<<"\n";
    if(cfild==1){
         for(int j=0;j<l;j++){
            temp[0].push_back(b[j]);
        }
            cfild+=1;
            return;
    }

    for(int i=0;i<cfild;i++){
         
        int j=0;
        
        for( j=0;j<l;j++){
 
            if(temp[i][j]==b[j])
                    break;
        }

            if(j==l){

                for(j=0;j<l;j++){
                     temp[cfild-1].push_back(b[j]);
                 }

                cfild+=1;
                // cout<<"cfild\n";
                return;
            }
        }

    return;
}

void check(int a[],int i,int k,int l){
    int b[l];
    bool ans=false;
    for(int j=0;j<l;j++){
        b[j]=a[i+j];
    }
    sort(b,b+l);
    int count=1;
    for(int j=0;j<l;j++){
        if(count==k){
            ans=true;
            break;
        }
        if(b[j]==b[j+1])
            continue;
        count++;
       }
    if(ans){
         // cout<<"count="<<count<<"\n";
    
        addIntoTemp(b,l);
    }
}
int main()
{
// ios::sync_with_stdio(false);
// cin.tie(false);
int n,q;
cin>>n>>q;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
while(q--){
    int l,k;
    cin>>l>>k;
    for(int i=0;i<n;i++){
        if(i+l<n){
            check(a,i,k,l);
        }
    }
    // cout<<cfild<<"\n";
    for(int i=0;i<cfild;i++)
     temp[i].clear();
    cfild=1;
}
}