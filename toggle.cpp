#include<bits/stdc++.h>
using namespace std;

void toggleAllBit(int a){
	int temp=1,ans;
	while(temp<a){

		a^=temp;
		temp=temp<<1;
	}
	cout<<a;
}
int main(){

int a;
cin>>a;

toggleAllBit(a);
}