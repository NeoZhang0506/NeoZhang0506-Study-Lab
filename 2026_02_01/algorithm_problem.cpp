/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
**/
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    if (headA == NULL || headB == NULL) {
        return NULL;
    }
    struct ListNode* pA = headA, * pB = headB;
    while (pA != pB) {
        pA = pA == NULL ? headB : pA->next;
        pB = pB == NULL ? headA : pB->next;
    }
    return pA;
}

bool hasCycle(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return false;
    }
    struct ListNode* slow = head;
    struct ListNode* fast = head->next;
    while (slow != fast) {
        if (fast == NULL || fast->next == NULL) {
            return false;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
}
