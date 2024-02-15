#include <bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int data;
        int carry=0;
        ListNode* head=nullptr;
        ListNode* temp=head;
            data=(l1->val) + (l2->val) + (carry);
            carry=data/10;
            data%=10;
            ListNode* NN=new ListNode(data);
            head=NN;
            temp=head;
            l1=l1->next;l2=l2->next;
        while(l1!=nullptr && l2!=nullptr){
            data=(l1->val) + (l2->val) + (carry);
            carry=data/10;
            data%=10;
            ListNode* NN=new ListNode(data);
            cout<<data<<" ";
                temp->next=NN;
                temp=temp->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=nullptr){
            data=l1->val+carry;
            carry=data/10;
            data%=10;
             ListNode* NN=new ListNode(data);
                temp->next=NN;
                temp=temp->next;

            l1=l1->next;

        }
        while(l2!=nullptr){
            data=l2->val+carry;
            carry=data/10;
            data%=10;
             ListNode* NN=new ListNode(data);
                temp->next=NN;
                temp=temp->next;
            l2=l2->next;

        }
        if(carry){
            ListNode* NN =new ListNode(1);
            temp->next=NN;
        }
        return head;
    }
int main(){
ListNode* n1=new ListNode(2);
ListNode* n2=new ListNode(4);
ListNode* n3=new ListNode(3);
ListNode* n4=new ListNode(5);
ListNode* n5=new ListNode(6);
ListNode* n6=new ListNode(4);
ListNode* l1=n1;
l1->next=n2;
l1->next->next=n3;
ListNode* l2=n4;
l2->next=n5;
l2->next->next=n6;
ListNode* head=addTwoNumbers(l1,l2);
while(head!=nullptr){
    cout<<head->val<<"->";
    head=head->next;
}
return 0;
}