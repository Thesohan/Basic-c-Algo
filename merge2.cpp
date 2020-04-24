#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<string> split_string(string);
// long long s=0;
ll merge(vector<int> &arr, int begining, int mid,int end){
    int s=0;
    int beg=begining;
    vector<int> temp1,temp2;
    // cout<<"temp1 -->>";
    for(int i=beg;i<=mid;i++){
        temp1.push_back(arr[i]);
        // cout  << arr[i] << " ";
        // cout << "\n";
    }
    // cout<<"\n temp2-->> ";
    for (int i = mid + 1; i <=end; i++) {
      temp2.push_back(arr[i]);
      // cout << arr[i] << " ";
    }
// cout<<"\n";
    int index1=0,index2=0;
    while(index1<temp1.size() && index2<temp2.size()){
        if(temp1[index1]<=temp2[index2]){
            arr[beg++]=temp1[index1];
            index1++; 
        }
        else{
            s+=temp1.size()-index1;
            // if(s%10000!=0)
            // cout<<s<<"\n";
            // cout<<s<<"<--";
            arr[beg++]=temp2[index2];
            index2++;
        }
        if(s>10000000)
        cout<<"loop\n";
        
    }
    while (index1 < temp1.size()) {
        arr[beg++] = temp1[index1++];
    }
    while(index2<temp2.size()){
        arr[beg++]=temp2[index2++];
    }
    return s;
}
ll mergeSort(vector<int>&arr,int beg,int end){
    ll s=0;
    if(beg<end){
      int mid = (beg + end) / 2;
      // cout<<mid<<"<-- mid"<<"\n";
      s+=mergeSort(arr,beg,mid);
      s+=mergeSort(arr,mid+1,end);
      s+=merge(arr,beg,mid,end);
    }
    return s;


}

// Complete the countInversions function below.
ll countInversions(vector<int> arr) {
  cout<<"inside countInversions";
 return mergeSort(arr,0,arr.size()-1);
  // cout<<"\n";
  // for(int i=0;i<arr.size();i++){
  //   cout<<arr[i]<<" ";
  // }
  // return s;
}

int main() {
    int n;
    int t;
    cin>>t;
    while(t--){

    cin >> n;
// if(t!=2)
  // continue;
 
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
      int a;
       cin>>a;
      arr.push_back(a);
    }
    // s=0;

    ll result = countInversions(arr);
    cout<<result<<"\n";
    
    // cout<<t;
}


  return 0;
}
