#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> A={123,4,1,2,23,4,4,67,8,10};



    int n = (int)A.size();
    // create arrays to store length of longest segment in which ith element is greater
    long long int l[n], r[n], lr[n];
    // initialize elements array equal to 1.
    for(int i = 0; i < n; i += 1) {
        l[i] = r[i] = 1;
    }
    // find next greater element to the left of the current element
    for(int i = 1; i < n; i += 1) {
        int last = i-1;
        while(last >= 0 and A[i] > A[last]) {
            l[i] += l[last];
            last -= l[last];
        }
    }
    // find next greater element to the right of the current element
    for(int i = n-2; i >= 0; i -= 1) {
        int last = i+1;
        while(last < n and A[i] >= A[last]) {
            r[i] += r[last];
            last += r[last];
        }
    }
    // The number of subarrays in which current element will be the greater
    // for(int i = 0; i < n; i += 1) {
    //     lr[i] = l[i] * r[i];
    // }








	 // int n = A.size();
  //   int l[n];
    
  //   int r[n];
  //   for(int i=0;i<n;i++){
  //   	l[i]=r[i]=1;
  //   }
  //   stack<int> s;
  //   s.push(0);
  //   for(int i=1;i<A.size();i++){
  //       if(A[s.top()]>=A[i]){
  //           s.push(i);
  //           continue;
  //       }
  //       else {
  //           while(!s.empty() && A[i]>A[s.top()]){
  //               l[s.top()]=A[i];
  //               s.pop();
  //           }
  //           s.push(i);
  //       }
  //   }
  //   for(int i=0;i<n;i++){
  //       cout<<l[i]<<" ";
  //   }

  //   stack<int> s;
  //   s.push(n-1);
  //   for(int i=n-2;i>=0;i--){
  //       if(A[s.top()]>=A[i]){
  //           s.push(i);
  //           continue;
  //       }
  //       else {
  //           while(!s.empty() && A[i]>A[s.top()]){
  //               r[s.top()]=A[i];
  //               s.pop();
  //           }
  //           s.push(i);
  //       }
  //   }
    for(int i=0;i<n;i++){
        cout<<r[i]<<" ";
    }

}