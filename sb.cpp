#include <bits/stdc++.h>

using namespace std;
long long a[5000][5000];
    
// Complete the commonChild function below.
int commonChild(string s1, string s2) { 
    
    int c=0;
    // memset(a,0,sizeof(a));
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++)
    //     cout<<a[i][j]<<" ";
    // }
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         if(s1[i-1]==s2[j-1]){
    //             a[i][j]=a[i-1][j-1]+1;
    //         }
    //         else{
    //             if(a[i-1][j]>a[i][j-1]){
    //                 a[i][j]=a[i-1][j];
    //             }
    //             else{
    //                 a[i][j]=a[i][j-1];
    //             }
    //         }
    //     }
    // }

    int ans=0;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         cout<<a[i][j]<<" ";
    //         ans=max(ans,a[i][j]);
    //     }
    //     cout<<"\n";

    // }
    
    return ans;
    
}

int main()
{
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    // cout<<c1
    int result = commonChild(s1, s2);

    cout << result << "\n";

    // fout.close();

    return 0;
}
