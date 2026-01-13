//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param nums int整型vector
//     * @param target int整型
//     * @return int整型
//     */
//    int search(vector<int>& nums, int target) {
//        // write code here
//        int left = 0;
//        int right = nums.size() - 1;
//        while (left <= right)
//        {
//            int mid = left + (right - left) / 2;
//            if (nums[mid] == target)
//                return mid;
//            else if (nums[mid] > target)
//                right = mid - 1;
//            else
//                left = mid + 1;
//        }
//        return -1;
//    }
//};

//class solution {
//public:
//    void merge(int a[], int m, int b[], int n) {
//        // 1. 先拼接数组
//        for (int i = 0; i < n; ++i) a[m + i] = b[i];
//
//         // 2. 排序
//        std::sort(a, a + m + n);
//    }
//};

//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param str string字符串 待判断的字符串
//     * @return bool布尔型
//     */
//    bool judge(string str) {
//        // write code here
//        int left = 0, right = str.length() - 1;
//        while (left <= right)
//        {
//            if (str[left] != str[right])
//                return false;
//            left++;
//            right--;
//        }
//        return true;
//    }
//};

//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * 反转字符串
//     * @param str string字符串
//     * @return string字符串
//     */
//    string solve(string str) {
//        // write code here
//        int left = 0, right = str.length() - 1;
//        while (left < right)
//        {
//            swap(str[left], str[right]);
//            left++;
//            right--;
//        }
//        return str;
//    }
//};

//class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param nums int整型vector
     * @return int整型
     */
    int minNumberInRotateArray(vector<int>& nums) {
        // write code here
        //分段进行二分查找
        int left = 0, right = nums.size() - 1;
        while (left < right)
        {
            int mid = left + (right - left);
            if (nums[mid] > nums[right])
                left = mid + 1;
            else if (nums[mid] == nums[right])
                right--;
            else
                right = mid;
        }
        return nums[left];
    }
};