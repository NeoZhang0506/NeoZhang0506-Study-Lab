class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        srand(time(NULL));
        return myQsort(nums, 0, nums.size() - 1, k);
    }

    int getRandom(vector<int>& nums, int left, int right)
    {
        int r = rand();
        return nums[r % (right - left + 1) + left];
    }

    int myQsort(vector<int>& nums, int l, int r, int k)
    {
        if(l == r) return nums[l];

        // 1. 基准元素的选择
        int key = getRandom(nums, l, r);
        // 2. 分成三块
        int left = l - 1, right = r + 1, i = l;
        while(i < right)
        {
            if(nums[i] < key) swap(nums[++left], nums[i++]);
            else if(nums[i] == key) i++;
            else swap(nums[--right], nums[i]);
        }

        // 3. 分情况讨论
        int c = r - right + 1, b = right - left - 1;
        if(c >= k) return myQsort(nums, right, r, k);
        else if(b + c >= k) return key;
        else return myQsort(nums, l, left, k - b - c);
    }
};


class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        srand(time(NULL));  // 随机数种子
        myQsort(nums, 0, nums.size() - 1);
        return nums;
    }

    // 快排
    void myQsort(vector<int>& nums, int l, int r)
    {
        if(l>=r)    return;

        // 把数组分成三部分
        int key = getRandom(nums, l, r);
        int i = l, left = l - 1, right = r + 1;
        while(i < right)
        {
            if(nums[i] < key) swap(nums[++left], nums[i++]);
            else if(nums[i] == key) i++;
            else swap(nums[--right], nums[i]);
        }


        myQsort(nums, l, left);
        myQsort(nums, right, r);
    }

    int getRandom(vector<int>& nums, int left, int right)
    {
        int r = rand();
        return nums[r % (right - left + 1) + left];
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};