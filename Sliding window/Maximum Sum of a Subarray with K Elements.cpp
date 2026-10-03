#include<bits/stdc++.h>
using namespace std;

//[Naive Approach] Try All Subarrays - O(n×k) Time and O(1) Space
/*int max_sum_withK_array(vector<int>arr,int k){
    int s= arr.size();
    int sum=INT_MIN;
    for(int i=0;i<s-k;i++){
     int cur_sum=0;
       for(int j=0;j<k;j++){
        cur_sum +=arr[i+j];
       }
        sum= max(cur_sum,sum);
    }
    return sum;
}*/

//[Expected approach] Sliding Window Technique - O(n) Time and O(1) Space
int max_sum_withK_array(vector<int>arr,int k){
     int n=arr.size();


     if (n<=k){
        cout<<"invalid";
        return -1;
     }

     int max_sum=0;
     // compute the first window
     for(int i=0;i<k;i++){
        max_sum+= arr[i];
     }

     int window_sum= max_sum;
     for(int i=k;i<n;i++){
        window_sum+=arr[i]-arr[i-k];// o(n)
        max_sum=max(max_sum,window_sum);
     }
  return max_sum;
}
int main(){
    vector<int>arr={5,2,-1,0,3};
    int k;
    cin>>k;
    cout<<max_sum_withK_array(arr,k);
    return 0;
}

