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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* temp = head;
        while(temp != nullptr)
        {
            ListNode* temp2 = temp->next;
            while(temp2 != nullptr && temp->val == temp2->val)
            {
                ListNode* t = temp2->next;
                delete temp2;
                temp->next = t;
                temp2 = t;
            }
            temp = temp->next;
        }
        return head;
    }
};