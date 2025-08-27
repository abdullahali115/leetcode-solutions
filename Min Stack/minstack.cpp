#include <iostream>
#include <vector>
using namespace std;
struct Node{
    int val;
    Node* next;
    int min_till_now;
    Node()
    {
        val = 0;
        next = nullptr;
        min_till_now = 0;
    }
    Node(int x)
    {
        val = x;
        next = nullptr;
        min_till_now = 0;
    }
    Node(int x, int m)
    {
        val = x;
        next = nullptr;
        min_till_now = m;
    }
};

class MinStack {
    Node* head;
public:
    MinStack() {
        head = nullptr;
    }
    
    void push(int val) {
        if(!head){
            head = new Node(val, val);
        }
        else{
            int temp = min(head->min_till_now, val);
            Node* tempNode = new Node(val, temp);
            tempNode->next = head;
            head = tempNode;
        }
    }
    
    void pop() {
        if(head != nullptr){
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    
    int top() {
        if(head != nullptr)
            return head->val;
        return int();
    }
    
    int getMin() {
        if(head != nullptr)
            return head->min_till_now;
        return int();
    }
};