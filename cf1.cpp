#include<bits/stdc++.h>
using namespace std;
string ans="No";
int isRowSwitched=1;
void findPath(vector<vector<char>>&v,int i,int j,pair<int,int> office,int turns){
	if(turns>2){
		if(ans=="Yes"){
			return;
		}
		ans="No";
		return;
	}

	v[i][j]='*';

	// cout<<i<<"i "<<j<<"j turns"<<turns<<"\n";
	// cout<<"ahsdfhsd"<<i<<j<<"\n";
	// cout<<v[i][j+1];
	if(i==office.first && j==office.second){
		// cout<<"Yes";
		ans="Yes";
		return;
	}
	// cout<<v[i+1][j]<<"  ";
	if(v[i+1][j]=='.'||v[i+1][j]=='T'){
		// cout<<j<<"jjjj";
		if(isRowSwitched==0){
			isRowSwitched=1;
		 findPath(v,i+1,j,office,turns+1);		
		}
		else{
		 findPath(v,i+1,j,office,turns);					
		}
	}
	if(v[i][j-1]=='.'||v[i][j-1]=='T'){
		if(isRowSwitched==0){
			isRowSwitched=1;
		findPath(v,i,j-1,office,turns+1);							
		}
		else{
			findPath(v,i,j-1,office,turns);				
		}			
	}
	if(v[i][j+1]=='.'||v[i][j+1]=='T'){
		if(isRowSwitched==1){
			isRowSwitched=0;
		findPath(v,i,j+1,office,turns+1);				
		}
		else{
		findPath(v,i,j+1,office,turns);							
		}
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	pair<int,int>home,office;
	vector<vector<char>> a(n+2,vector<char>(m+2));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='S'){
				home=make_pair(i,j);
			}
			if(a[i][j]=='T'){
				office = make_pair(i,j);
			}
		}
	}

	for(int i=0;i<=n+1;i++){
		a[i][0]='*';
		a[i][m+1]='*';
	}

	for(int i=0;i<=m+1;i++){
		a[0][i]='*';
		a[n+1][i]='*';
	}
	// cout<<office.first<<office.second;
	findPath(a,home.first,home.second,office,0);

	// for(int i=0;i<=n+1;i++){
	// 	for(int j=0;j<=m+1;j++){
	// 		cout<<a[i][j]<<" ";
	// 	}
	// 	cout<<"\n";
	// }
	cout<<ans;
	
}