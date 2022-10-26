// Question: ADD TWO NUMBERS
// Platform: LEETCODE
// Difficulty: Medium

class Solution {
public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head= new ListNode();
        ListNode* temp=head;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum=0;
            if(l1!=NULL){
                sum+= l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+= l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode* node=new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
        }
        return head->next;
    }

};

// **EXPLANATION:**
// 1. Our intution behind this approach is to use the simple adding method with carry method.
// 2. First we make the head node which points to the head of given LinkedList (head is the node which we return as an answer).
// 3. Then we make the another node temp for traversing the LinkedList.
// 4. Then we traverse the LinkedList till our three condition will meet, which are till l1 is null, till l2 is null, till carry is zero
// 5. We traverse and add the current node data to variable sum, after that we add the carry in it, also update the carry and sum
// 6. Then we make the new node and put the sum in the node and move the pointer to its next.
// 7. After coming out from the loop we reurn the head -> next which points at the head of new LinkedList we made by adding.
