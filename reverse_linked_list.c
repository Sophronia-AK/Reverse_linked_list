/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void display(struct ListNode* front)
{
    struct ListNode* temp = front;
    while(temp!= NULL)
    {
        printf("%d-->",temp->val);
        temp = temp->next;
    }
    printf("\n");
}


struct ListNode* reverseList(struct ListNode* head){

    struct ListNode* front;
    struct ListNode* rear;
    struct ListNode* temp;
    
    if(head == NULL)
        return head;
    
    front = head;
    rear = head->next;
    if(rear != NULL)
    {
        temp = rear->next;
    }
    else
        return front;
    
    while(front != NULL)
    {
        rear->next = front;
        if(front == head)
            front->next = NULL;
        
        front = rear;
        //display(front);
        rear = temp;
        if(temp != NULL)
        {
            temp = temp->next;
            
        }
            
        else
            break;
        
        
    }
    
    return front;
}
