#include <bits/stdc++.h>

using namespace std;

vector<int> findMaxUpto(vector<int> a) { vector<int> b; int largest = a[0];
for (int i = 0; i < a.size(); i++) { if (a[i] > largest) { largest = a[i]; }
b.push_back(largest); // cout << largest << " "; } cout << endl; return b; }
int main() { int n; vector<int> a = {-1, -4, -2, 3, 7, 110}; vector<int> b =
findMaxUpto(a); for(int i=0;i<b.size();i++){ cout<<b[i]<<" "; } int maxDiff =
0; for (int i = 0; i < a.size(); i++) { int tempDiff = abs(a[i] - b[i]); if
(tempDiff > maxDiff) maxDiff = tempDiff; } cout << maxDiff; }