
class Solution {
public:

    // Function to find GCD
    int findGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        return a;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        ListNode* current = head;

        while (current != NULL && current->next != NULL) {

         
            int gcd = findGCD(current->val, current->next->val);

            ListNode* newNode = new ListNode(gcd);

     
            newNode->next = current->next;
            current->next = newNode;

         
            current = newNode->next;
        }

        return head;
    }
};
