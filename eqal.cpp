#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n,0);
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        int ans=0;
        vector<int>b(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>b[i];
            b[i]-=a[i-1];
            if(b[i]<0){
                ans+=1000;
            }
            if(b[i]!=b[i-1]){
                ans++;
            }
        }
        cout<<ans<<"\n";
        ans>2?cout<<"No\n":cout<<"Yes\n";      
    }
}