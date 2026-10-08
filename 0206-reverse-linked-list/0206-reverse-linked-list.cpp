class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        vector<int> arr;

        ListNode* temp = head;

        // Put linked list data into vector
        while (temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        // Reverse vector
        reverse(arr.begin(), arr.end());

        // Create new linked list
        ListNode* newHead = NULL;
        ListNode* tail = NULL;

        for (int x : arr) {
            ListNode* newNode = new ListNode(x);

            if (newHead == NULL) {
                newHead = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        return newHead;
    }
};