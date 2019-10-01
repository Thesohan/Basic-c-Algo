#include<bits/stdc++.h>
using namespace std;
#define loop(i,n,k) for(i=k;i<n;i++)
int main(){
	cout<<"enter order of matrix\n";
	int n,m,i,j;
	cin>>n>>m;
	int	a[n][m];
	cout<<"enter matrix\n";
	loop(i,n,0){
		loop(j,m,0){
			cin>>a[i][j];
		}
	}
	int b[n][m],maximum=0;
	loop(i,n,0){
		b[i][0]=a[i][0];
		b[0][i]=a[0][i];
	}
	loop(i,n,1){
		loop(j,m,1){
			if(a[i][j]==0){
				b[i][j]=0;
			}
			else{
				int mini=min(a[i-1][j],a[i][j-1]);
				b[i][j]=min(mini,a[i-1][j-1])+1;
			}
			maximum=max(maximum,b[i][j]);
		}
	}
	cout<<maximum<<"\n";

	loop(i,n,0){
		loop(j,m,0){
			cout<<b[i][j];
		}
		cout<<"\n";
	}

}