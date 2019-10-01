#include <bits/stdc++.h>

using namespace std;
// int findPosition(vector<int> temp,int b,int end,int item){
//     if(b<end){
//         int mid=ceil((b+end)/2);
//         if(temp[mid]==item){
//             return mid;
//         }
//         else if(temp[mid]<item){
//             findPosition(temp,b, mid+1,item);
//         } else {
//         findPosition(temp, mid + 1, end, item);
//         }
//     }
//     else{
//         return b;
//     } 
// }
// Complete the longestIncreasingSubsequence function below.
int longestIncreasingSubsequence(vector<int> arr) {

    vector<int> parent(arr.size(),-1);
    vector<int> temp;
    int len=0;
      // cout<<"he";
      temp.push_back(0);
    parent.push_back(-1);
    for(int i=1;i<arr.size();i++){

        if(arr[i]>arr[temp[len]]){
            temp.push_back(i);
            if(temp[len]==0){
                parent[i]=-1;
            }
            else{
                parent[i] = temp[len];
            }
        // cout<<"he";
            len++;
        } else {
        //   int index = findPosition(temp, 0, len, arr[i]);
          int beg=0,end=len,mid=0,item=arr[i];

        //   while (rs - l > 1) {
        //     int m = l + (r - l) / 2;
        //     if (arr[T[m]] >= key)
        //       r = m;
        //     else
        //       l = m;
        //   }
        // cout<<"he";
          while(beg<=end){
            mid = ceil((beg + end) / 2);
            if (arr[temp[mid]] == item) {
               break;
            } else if (arr[temp[mid]] <= item) {
              beg=mid+1;
              } else {
              end=mid-1;
            //   findPosition(temp, mid + 1, end, item);
            }
          }
         int index=mid;
          temp[index] = i;
          if(temp[index]==0){
            parent[i]=-1;
        }else
          parent[i] = temp[index ];
      }
  }
  return len+1;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);
int i;
    for ( i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        // cout<<i;
        arr[i] = arr_item;
    }

    int result = longestIncreasingSubsequence(arr);

    cout << result << "\n";

    fout.close();

    return 0;
}
