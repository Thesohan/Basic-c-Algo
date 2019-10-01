#include<bits/stdc++.h>
using namespace std;
struct P
{
	int x,y;
	/*bool operator<(const P &p){
		if(x!=p.x)
			return x<p.x;
		else return y<p.y;
	}
	*/
	friend bool operator<(P a,P b){
		return a.x<b.x;
	}
};
typedef struct P Pa;

int main(){
Pa p[10];
for(int i=0;i<10;i++){
	p[i].x=i+10*pow(-1,i);
	p[i].y=i+20*pow(-1,i);
}

sort(p,p+10);
for(int i=0;i<10;i++){
	cout<<p[i].x<<" "<<p[i].y<<"\n";
}

	
}