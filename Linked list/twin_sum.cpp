#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>val= {5,9,2,1};

    int s= val.size();
    int sum=0;
    int mx=0;
    for(int i=0;i<=(s/2)-1;i++){
        sum=val[i]+val[s-1-i];

        mx= max(mx,sum);
    }
    cout<<mx;
    return 0;
}




//slow → finds where second half starts
//fast → finds the middle, then finished
//pre → becomes reversed second-half head
//first → traverses first half
//second → traverses reversed second half
/*
class Solution {
public:
    int pairSum(ListNode* head) {


        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

    
        ListNode* pre = nullptr;
        ListNode* curr = slow;
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }

        
        ListNode* first = head;
        ListNode* second = pre;

        int maxsum = 0;
        while (second != nullptr) {
            int sum = first->val + second->val;
            maxsum = max(maxsum, sum);
            first = first->next;
            second = second->next;
        }

        return maxsum;
    }
};



1. Find middle using slow/fast
2. Reverse second half
3. Compare first half with reversed second half
4. Find maximum
*/
