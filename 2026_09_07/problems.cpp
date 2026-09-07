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
    int partition(vector<int>& nums, int l, int r) {
        int pivot = nums[r];
        int i = l - 1;
        for (int j = l; j <= r - 1; ++j) {
            if (nums[j] <= pivot) {
                i = i + 1;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i + 1], nums[r]);
        return i + 1;
    }

    // 基于随机的划分
    int randomized_partition(vector<int>& nums, int l, int r) {
        int i = rand() % (r - l + 1) + l;
        swap(nums[r], nums[i]);
        return partition(nums, l, r);
    }

    void randomized_selected(vector<int>& arr, int l, int r, int k) {
        if (l >= r) {
            return;
        }
        int pos = randomized_partition(arr, l, r);
        int num = pos - l + 1;
        if (k == num) {
            return;
        } else if (k < num) {
            randomized_selected(arr, l, pos - 1, k);
        } else {
            randomized_selected(arr, pos + 1, r, k - num);
        }
    }

public:
    vector<int> smallestK(vector<int>& arr, int k) {
        srand((unsigned)time(NULL));
        randomized_selected(arr, 0, (int)arr.size() - 1, k);
        vector<int> vec;
        for (int i = 0; i < k; ++i) {
            vec.push_back(arr[i]);
        }
        return vec;
    }
};

class Solution {

    vector<int> tmp;
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        tmp.resize(nums.size());
        myMergeSort(nums, 0, nums.size() - 1);
        return nums;
    }

    void myMergeSort(vector<int>& nums, int left, int right)
    {
         if(left >= right) 
            return;
        
        // 1. 选择中间点划分区间
        int mid = (left + right) >> 1;
        //[left, mid], [mid, right]

        // 2. 
        myMergeSort(nums, left, mid);
        myMergeSort(nums, mid + 1, right);

        // 3. 合并两个有序数组
        int cur1 = left, cur2 = mid + 1, i = 0;
        while(cur1 <= mid && cur2 <= right)
            tmp[i++] = nums[cur1] <= nums[cur2] ? nums[cur1++] : nums[cur2++];
        // 处理还没有处理完的数组
        while(cur1 <= mid) 
            tmp[i++] = nums[cur1++];
        while(cur2 <= right)
            tmp[i++] = nums[cur2++];
        
        // 还原
        for(int i = left; i <= right; i++)
            nums[i] = tmp[i - left];
    }
};