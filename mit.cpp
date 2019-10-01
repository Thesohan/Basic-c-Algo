// C++ program to demonstrate functionality of unordered_map 
#include <iostream> 
#include <map> 
using namespace std; 

int main() 
{ 
	// Declaring umap to be of <string, int> type 
	// key will be of string type and mapped value will 
	// be of double type 
	map<int, int> umap; 

	// inserting values by using [] operator 
  umap[1]=2;
  umap[2]=3;
  umap[2]++;
  cout<<umap[3]<<"\n";
	// Traversing an unordered map 
	for (auto x : umap) 
	cout << x.first << " " << x.second << endl; 

} 
