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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p1 = list1;
        ListNode* p2 = list2;
        ListNode* result = nullptr;
        ListNode* res = nullptr;

        while(p1 != nullptr && p2 != nullptr)
        {
            if(p1->val == p2->val)
            {
                if(res == nullptr)
                {
                    res = new ListNode(p1->val);
                    result = res;
                }
                else
                {
                    res->next = new ListNode(p1->val);
                    res = res->next;
                }
                res->next = new ListNode(p2->val);
                res = res->next;
                p1 = p1->next;
                p2 = p2->next;
            }
            else if(p1->val < p2->val)
            {
                if(res == nullptr)
                {
                    res = new ListNode(p1->val);
                    result = res;
                }
                else
                {
                    res->next = new ListNode(p1->val);
                    res = res->next;
                }
                p1 = p1->next;
            }
            else if(p2->val < p1->val)
            {
                if(res == nullptr)
                {
                    res = new ListNode(p2->val);
                    result = res;
                }
                else
                {
                    res->next = new ListNode(p2->val);
                    res = res->next;
                }
                p2 = p2->next;
            }
        }
        while(p1 != nullptr)
        {
            if(res == nullptr)
            {
                res = new ListNode(p1->val);
                result = res;
            }
            else
            {
            res->next = new ListNode(p1->val);
                res = res->next;
            }
            p1 = p1->next;
        }
        while(p2 != nullptr)
        {
            if(res == nullptr)
            {
                res = new ListNode(p2->val);
                result = res;
            }
            else
            {
            res->next = new ListNode(p2->val);
                res = res->next;
            }
            p2 = p2->next;
        }
        return result;
    }
};