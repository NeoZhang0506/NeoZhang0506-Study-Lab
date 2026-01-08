////双指针算法
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int n = nums.size(), left = 0, right = 0;
//        while (right < n) {
//            if (nums[right]) {
//                swap(nums[left], nums[right]);
//                left++;
//            }
//            right++;
//        }
//    }
//};
//
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int cur = 0;
//        int dest = -1;
//        for (cur = 0; cur < nums.size(); cur++)
//        {
//            if (nums[cur]) //处理非0元素
//            {
//                dest++;
//                swap(nums[dest], nums[cur]);
//            }
//        }
//    }
//};


////滑动窗口
//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int>& nums) {
//        int n = nums.size(), sum = 0, len = INT_MAX;
//        for (int left = 0, right = 0; right < n; right++)
//        {
//            sum += nums[right];//入窗口
//            while (sum >= target)//判断
//            {
//                len = min(len, right - left + 1);//更新结果
//                sum -= nums[left++];//出窗口
//            }
//        }
//        return len == INT_MAX ? 0 : len;
//    }


//class Solution {
//public:
//    int longestOnes(vector<int>& nums, int k) {
//        int n = nums.size();
//        int left = 0, lsum = 0, rsum = 0;
//        int ans = 0;
//        for (int right = 0; right < n; ++right) {
//            rsum += 1 - nums[right];
//            while (lsum < rsum - k) {
//                lsum += 1 - nums[left];
//                ++left;
//            }
//            ans = max(ans, right - left + 1);
//        }
//        return ans;
//    }
//};
