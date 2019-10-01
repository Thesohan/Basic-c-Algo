#include<bits/stdc++.h>
using namespace std;
int n,i,x,y,r[6],c[100];
int main(){
    c[4]=0,c[8]=1,c[15]=2,c[16]=3,c[23]=4,c[42]=5;
    for(cin>>n;i<n;i++){
        cin>>x;
        y=c[x];
        if(y==0){
            r[y]++;
        }
        else if(y>0 and r[y-1]>0){
            r[y-1]--;
            r[y]++;
        }
    }
    cout<<n-r[5]*6;
}