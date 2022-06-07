// don't include the comment in lc
// 19. Remove Nth Node From End of List
// fsociety 9ms, 31%

Follow up: In a single pass?
Solution: 

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while(temp != nullptr) {
            temp = temp->next;
            count++;
        }
        if(count == 1 && n == 1)
            return head = nullptr;
        if(count == n) {
            return head = head->next;
        }
        //std::cout << count << endl;
        temp = head;
        int target = count - n - 1;
        while(target-- && temp->next){
            temp = temp->next;
        }
        temp->next = temp->next->next;
                
        return head;
    }
};
