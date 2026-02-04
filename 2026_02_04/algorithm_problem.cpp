/*解题思路：分成两个链表，一个放比比x小的数，另一个放比x大等于的数，最后将两个数组合到一起。一定要放哨兵位，带头节点的会比较简单。最后返回*/
class Partition
{
public:
    ListNode* partition(ListNode* pHead, int x)
    {
        struct ListNode* list1head, * list1tail, * list2head, * list2tail;//定义两组链表
        list1head = list1tail = (struct ListNode*)malloc(sizeof(struct ListNode));//开辟空间
        list2head = list2tail = (struct ListNode*)malloc(sizeof(struct ListNode));
        list1tail->next = list2tail->next = NULL;
        struct ListNode* cur = pHead;
        while (cur)
        {
            if (cur->val < x)//把比x小的数放在listhead链表里
            {
                list1tail->next = cur;
                list1tail = list1tail->next;
            }
            else//把比x大的数放在listhead链表里
            {
                list2tail->next = cur;
                list2tail = list2tail->next;
            }
            cur = cur->next;
        }
        list2tail->next = NULL;
        list1tail->next = list2head->next;//组合两个链表
        return list1head->next;
    }
};