class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int cur = 0, left = 0, right = nums.size()-1;
        while(cur <= right)
        {
            if(nums[cur] == 0)
            {
                swap(nums[left], nums[cur]);
                left++;
                cur++;
            }
            else if(nums[cur] == 1)
                cur++;
            else 
            {
                swap(nums[right], nums[cur]);
                right--;
            }
        }
    }
};

class Solution {
public:
    vector<int> missingTwo(vector<int>& nums) 
    {
        int tmp = 0;
        for(int i = 1; i <= nums.size() + 2; i++)
            tmp ^= i;
        for(int i = 0; i < nums.size(); i++)
            tmp ^= nums[i];

        int diff = 0;
        while(1)
        {
            if(((tmp >> diff) & 1) == 1)   
                break;
            else 
                diff++;
        }

        int a = 0, b = 0;
        for(int x : nums)
            if(((x >> diff) & 1) == 1)
                b ^= x;
            else 
                a ^= x;
        for(int i = 1; i <= nums.size() + 2; i++)
            if(((i >> diff) & 1) == 1)
                b ^= i;
            else 
                a ^= i;
        return {a, b};
    }
};