//problem link:
//solve status:
//learnings:

//TC: O()
//MC: O()

#include<bits/stdc++.h>
using namespace std;

    public ListNode removeDuplicates(ListNode head) {
        // Base case : If head value is null, return null
        if(head == null) {
            return null;
        }
 
        // Initialize current pointer at head
        ListNode current = head;
 
        // Iterate over list and compare everytime current node value with next node value
        while (current.next != null) {
            // if current node value is equal to next node value
            // delete next node by updating current.next to current.next.next
            if(current.val == current.next.val) {
                current.next = current.next.next;
            }
            // if current node value is not equal
            // just increment current pointer to proceed further
            else {
                current = current.next;
            }
        }
        return head;
    }

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
