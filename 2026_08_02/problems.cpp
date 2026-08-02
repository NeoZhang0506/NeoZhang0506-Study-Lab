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