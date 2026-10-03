//Problem: Minimum Size Subarray Sum

//Given an array of positive integers arr and a target 7,
//find the minimum length of a contiguous subarray whose sum is
//greater than or equal to 7.

#include<bits/stdc++.h>
using namespace std;

int  minSubarrayLen(vector<int>&arr,int target){
  int left=0;
  int sum=0;
  int miniLength = INT_MAX;

  for(int right=0;right<arr.size();right++){
    sum+= arr[right];
  while(sum>=target){
    int length= right-left+1;
    miniLength= min(miniLength,length);

    sum-=arr[left];
    left++;
  }
  }
  return miniLength==INT_MAX?0:miniLength;
}




int main(){
    vector<int>arr={ 2,3,1,2,4,3};
    int k;
    cin>>k;
    cout<< minSubarrayLen(arr,k);
    return 0;
}


