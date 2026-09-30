class Solution {
public:
    int trap(vector<int>& height) 
    {
        int curRain = 0;
        int rightMax = 0, leftMax = 0;
        int right = height.size() - 1, left = 0;
        while(right > left)
        {
            leftMax = max(height[left], leftMax);
            rightMax = max(height[right], rightMax);
            if(height[right] < height[left])
            {
                 curRain +=  rightMax - height[right];
                 right--;
            }
            else
            {
                curRain += leftMax - height[left];
                left++;
            }
        }
        return curRain;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }
        ListNode *pA = headA, *pB = headB;
        while (pA != pB) {
            pA = pA == nullptr ? headB : pA->next;
            pB = pB == nullptr ? headA : pB->next;
        }
        return pA;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
         ListNode *pcur = head;
         ListNode *prev = nullptr;
         while(pcur)
         {
             ListNode *next = pcur->next;
             pcur->next = prev;
             prev = pcur;
             pcur = next;
         }
         return prev;
    }
};