//int removeElement(int* nums, int numsSize, int val) {
//    int left = 0;
//    for (int right = 0; right < numsSize; right++)
//    {
//        if (nums[right] != val)
//        {
//            nums[left] = nums[right];
//            left++;
//        }
//    }
//    return left;
//}
//
//int removeDuplicates(int* nums, int numsSize) {
//    if (numsSize == 0) {
//        return 0;
//    }
//    int fast = 1, slow = 1;
//    while (fast < numsSize) {
//        if (nums[fast] != nums[fast - 1]) {
//            nums[slow] = nums[fast];
//            ++slow;
//        }
//        ++fast;
//    }
//    return slow;
//}
//
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//    int p1 = 0, p2 = 0;
//    int sorted[m + n];
//    int cur;
//    while (p1 < m || p2 < n) {
//        if (p1 == m) {
//            cur = nums2[p2++];
//        }
//        else if (p2 == n) {
//            cur = nums1[p1++];
//        }
//        else if (nums1[p1] < nums2[p2]) {
//            cur = nums1[p1++];
//        }
//        else {
//            cur = nums2[p2++];
//        }
//        sorted[p1 + p2 - 1] = cur;
//    }
//    for (int i = 0; i != m + n; ++i) {
//        nums1[i] = sorted[i];
//    }
//}
