//class Partition {
//public:
//    ListNode* partition(ListNode* pHead, int x) {
//        if (!pHead || !pHead->next) return pHead;
//
//        ListNode lessHead(0), greatHead(0);   // 哑节点
//        ListNode* lessTail = &lessHead, * greatTail = &greatHead;
//
//        for (ListNode* cur = pHead; cur; ) {
//            ListNode* nxt = cur->next;        // 先保存 next
//            if (cur->val < x) {
//                lessTail->next = cur;
//                lessTail = cur;
//            }
//            else {
//                greatTail->next = cur;
//                greatTail = cur;
//            }
//            cur = nxt;
//        }
//
//        // 拼接 & 封口
//        lessTail->next = greatHead.next;
//        greatTail->next = nullptr;            // 一定别忘了断尾，防止成环
//        return lessHead.next;
//    }
//};
//
//class Partition {
//public:
//    ListNode* partition(ListNode* pHead, int x) {
//        if (!pHead || !pHead->next) return pHead;
//
//        ListNode lessHead(0), greatHead(0);   // 哑节点
//        ListNode* lessTail = &lessHead, * greatTail = &greatHead;
//
//        for (ListNode* cur = pHead; cur; ) {
//            ListNode* nxt = cur->next;        // 先保存 next
//            if (cur->val < x) {
//                lessTail->next = cur;
//                lessTail = cur;
//            }
//            else {
//                greatTail->next = cur;
//                greatTail = cur;
//            }
//            cur = nxt;
//        }
//
//         拼接 & 封口
//        lessTail->next = greatHead.next;
//        greatTail->next = nullptr;            // 一定别忘了断尾，防止成环
//        return lessHead.next;
//    }
//};