#include<bits/stdc++.h>
using namespace std;
const int ALPHABATE_SIZE = 26;
typedef struct TrieNode{
	struct TrieNode *children[ALPHABATE_SIZE];
	bool isEndOfWord;
	TrieNode(){
		isEndOfWord=false;
		for(int i=0;i<ALPHABATE_SIZE;i++)children[i]=NULL;
	}
}Trie;

void insert(Trie *root,string key){
	
	for(int i=0;i<key.size();i++){
		int index=key[i]-'a';
		if(!root->children[index]){
			root->children[index]=new Trie();
		}
			root=root->children[index];
	}
	root->isEndOfWord=true;
}
bool search(Trie *root,string key){
	for(int i=0;i<key.size();i++){
		int index = key[i]-'a';
		if(!root->children[index]){
			return false;
		}
		root=root->children[index];
	}
	return root!=NULL && root->isEndOfWord;
}
int main(){
	string keys[] = {"the", "a", "there", 
                    "answer", "any", "by", 
                     "bye", "their" }; 
    int n = sizeof(keys)/sizeof(keys[0]); 
  
	Trie *root=new Trie();
	for(int i=0;i<n;i++)insert(root,keys[i]);
	search(root,"af")?cout<<"Yes\n":cout<<"NO\n";
}