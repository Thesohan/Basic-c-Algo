#include<bits/stdc++.h>
#include <stdio.h> 
#include <limits.h> 
using namespace std;
int  minD(int V,int dist[], bool sptSet[]) 
{ 
int min = INT_MAX, min_index; 

for (int v = 0; v < V; v++) 
  if (sptSet[v] == false && dist[v] <= min) 
    min = dist[v], min_index = v; 
return min_index; 
} 
int  printDis(int V,int dist[], int n) 
{ 
printf("****Vertex Distance from Source ****\n"); 
for (int i = 0; i < V; i++) 
  printf("%d --->> %d\n", i, dist[i]); 
} 
int main() 
{ 
int V;
cin>>V;
int graph[V][V];
for(int i=0;i<V;i++){
  for(int j=0;j<V;j++){
    cin>>graph[i][j];
  }
} 
int src;
cin>>src;
  int dist[V];   
  bool sptSet[V]; 
  for (int i = 0; i < V; i++) 
    dist[i] = INT_MAX, sptSet[i] = false; 
  dist[src] = 0; 
  for (int count = 0; count < V-1; count++) 
  { 
  int u =  minD(V,dist, sptSet); 
  sptSet[u] = true; 
  for (int v = 0; v < V; v++) 
    if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX 
                  && dist[u]+graph[u][v] < dist[v]) 
      dist[v] = dist[u] + graph[u][v]; 
  } 
   printDis(V,dist, V);  
  return 0; 
} 
