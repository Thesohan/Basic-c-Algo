#include<bits/stdc++.h>
using namespace std;
#define SIZE 100000 + 1
#define loop(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
// #define f first
// #define s second

vector < pair < int,int > > v[SIZE]; 

bool vis [SIZE];

void dijkstra(int source, int d) {

int dist [10];
	memset(vis,false,sizeof(vis));
	// memset(dist,1,sizeof(dist));
	for(int i=0;i<10;i++)
	// 	dist[i]=10000;
	dist[source]=0;
	multiset < pair < int , int > > s;

	s.insert({0,source});

	while(!s.empty()){

		pair< int, int > p = *s.begin();

		s.erase(s.begin());

		int x = p.second;
		// cout<<x<<"x";
		int wei = p.first;
		// cout<<"wei"<<wei;
		if( vis[x]){
			continue;
		}

		vis[x]=true;

		for(int i=0;i<v[x].size();i++){
			int w = v[x][i].first;
			int e = v[x][i].second;
			// cout<<w<<"\n";
			// cout<<"dist e"<<dist[x]<<"\n";
			if(dist[x]+w<dist[e]){
				dist[e]=dist[x]+w;
				s.insert({dist[e],e});

			}
		}
	}

	for(int i=1;i<10;i++){
		// if(dist[i]!=10000)
		cout<<dist[i]<<"\n";
	}
}

int main(){
	cout<<"enter no. of vertix and edges"<<"\n";
	int n,m;
	cin>>n>>m;
	cout<<"enter edges with assosicated weights\n";
	int i;
	loop(i,m){

		int a,b,c;
		cin>>a>>b>>c;
		v[a].pb(mp(c,b));
	}
	int s,d;
	cin>>s>>d;

	dijkstra(s,d);

}