#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int> s;
	for(int i=0;i<100;i++){
		s.insert(i*pow((-1),2));
	}
	for(auto i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
	// int a[]={1,2,3,4,5,6,7,8,9,10};
	// for(int i=0;i<10;i++){
	// 	cout<<a[i]<<" ";
	// }

	// int x;
	// cin>>x;

	// int i=0,e=10,m;
	// while(i<=e){
	// 	m=(i+e)/2;
	// 	if(a[m]==x){
	// 		cout<<"element found at "<<m<<"\n";
	// 		exit(0);
	// 	}

	// 	else if(a[m]<x){
	// 		i=m;
	// 		continue;
	// 	}

	// 	else{
	// 		e=m;
	// 		continue;
	// 	}

	// }
	// cout<<"element not found";

}