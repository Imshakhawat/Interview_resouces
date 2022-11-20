//problem link:
//solve status:
//learnings:

//TC: O()
//MC: O()

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3 = new ListNode();
        ListNode* curr = list3;
        while(list1!=NULL && list2!=NULL){
            if(list1->val < list2->val){
                curr->next = new ListNode(list1->val);
                curr = curr->next;
                list1 = list1-> next;
            }
            else{
                curr->next = new ListNode(list2->val);
                curr = curr->next;
                list2 = list2-> next;
            }
        }
        while(list1){
            curr->next = new ListNode(list1->val);
            curr = curr->next;
            list1 = list1-> next;
        }
        while(list2){
            curr->next = new ListNode(list2->val);
            curr = curr->next;
            list2 = list2-> next;
        }

        list3 = list3->next;
        return list3;
    }
};


class Solution2 {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode();
        ListNode* curr;
        curr = dummy;
        while(list1 && list2){
            if(list1->val < list2->val){
                curr->next = list1;
                list1 = list1->next;
            }
            else{
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }

        
        if(list1){
            curr->next = list1;
        }
        if(list2){
            curr->next = list2;
        }
        return dummy->next;
    }
};


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Solution a;
    //cout<<a.func()<<endl;

        
}
