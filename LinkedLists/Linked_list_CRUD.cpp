//problem link:
//solve status:
//learnings:

//TC: O()
//MC: O()

#include<bits/stdc++.h>
using namespace std;

#define DummyValue INT_MIN

class LinkedListNode
{
public:
    int value;
    LinkedListNode* next;
    LinkedListNode(int val, LinkedListNode* nxt)
    {
        value = val;
        next = nxt;
    }


    LinkedListNode* insertAt_First(LinkedListNode* head, int val) {
        LinkedListNode* curr = new LinkedListNode(val, NULL);


        curr->next = head;

        head = curr;

        return head;

    }



    LinkedListNode* insertAt_Last(LinkedListNode* head, int val) {
        LinkedListNode* curr = head;
        while (curr->next) {

            curr = curr->next;

        }
        curr->next = new LinkedListNode(val, NULL);
        return head;
    }



    void printList(LinkedListNode* head) {
        LinkedListNode* curr = head->next;
        while (curr) {
            cout << curr->value << " ";
            curr = curr->next;

        }

        cout << endl;
    }


    LinkedListNode* reverseList(LinkedListNode* head) {
        LinkedListNode* cur = NULL;
        while (head) {
            LinkedListNode* next = head -> next;//porer node address store korlam
            head -> next = cur;// head porer node k null krlam
            cur = head;//current node akn head er shamne chole ashche
            head = next;// head er vitor second node dhukse
        }
        return cur;
    }




    LinkedListNode* insertAt_RandomPositon(LinkedListNode* head, int val, int pos) {

        LinkedListNode* curr = head;
        int count = -1 ;
        while (curr->next ) {

            count++;

            if (count == pos) {
                LinkedListNode* NewNode = new LinkedListNode(val, NULL);

                NewNode->next = curr->next;
                curr->next = NewNode;

            }
            else {
                curr = curr->next;
            }

        }

        return head;
    }
    // 0-> 1-> 500-> 3-> 4


    LinkedListNode* DeleteAt_RandomPositon(LinkedListNode* head, int pos) {

        LinkedListNode* curr = head;
        int count = -1 ;
        while (curr->next ) {

            count++;

            if (count == pos) {
                curr->next = curr->next->next;

            }
            else {
                curr = curr->next;
            }

        }

        return head;
    }



};





int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    LinkedListNode* head = new LinkedListNode(DummyValue, NULL);

    LinkedListNode* x;

    for (int i = 0; i < 5; ++i)
    {
        head = x->insertAt_Last(head, i);
    }

    head = x->insertAt_RandomPositon(head, 500, 2);

    x->printList(head);

    head = x->DeleteAt_RandomPositon(head, 3);
    x->printList(head);

















}
