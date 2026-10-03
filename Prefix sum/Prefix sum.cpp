#include<bits/stdc++.h>
using namespace std;
vector<int>   presum(vector<int>arr){

    int n= arr.size();

    vector<int>prefixsum(n);
    prefixsum[0] = arr[0];
    for(int i=1;i<n;i++)
        prefixsum[i]=prefixsum[i-1]+arr[i];

    return prefixsum;

}

int main(){
    vector<int>arr={10,20,30,40,50,60,70};
    vector<int>prefixsum= presum(arr);

    for(int i: prefixsum){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
