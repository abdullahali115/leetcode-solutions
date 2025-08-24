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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr)
            return head;
        ListNode* prev = nullptr;
        ListNode* next = head->next;
        while(1)
        {
            head->next = prev;
            if (next == nullptr)
                break;
            prev = head;
            head = next;
            next = next->next;
        }
        return head;
    }
};