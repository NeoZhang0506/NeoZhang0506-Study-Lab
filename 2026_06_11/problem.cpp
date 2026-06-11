class Solution
{
public:
	int triangleNumber(vector<int>& nums) 
	{
		// 1. 优化
		sort(nums.begin(), nums.end());
		
		// 2. 利用双指针解决问题
		int ret = 0, n = nums.size();
		for(int i = n-1; i >= 2; i--)
		{
			int left = 0, right = i - 1;
			while(left < right)
			{
				if(nums[left] + nums[right] > nums[i])
				{
					ret += right - left;
					right--;
				}
				else
					left++;
			}
		}
		return ret;
	}
};
