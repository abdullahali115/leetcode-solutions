#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr)
            return head;
        int size = 0;
        ListNode* s = head;
        while(s != nullptr)
        {
            s = s->next;
            size++;
        }
        k = k % size;        
        for(int i=0;i<k;i++)
        {
            ListNode* tail = head;
            ListNode* temp = head;
            while(tail->next != nullptr){
                temp = tail;
                tail = tail->next;
            }
            tail->next = head;
            temp->next = nullptr;
            head = tail;
        }
        return head;
    }
};