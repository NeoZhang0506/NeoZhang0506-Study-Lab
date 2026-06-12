class Solution {
public:
	int minSubArrayLen(int target, vector<int>& nums) {
		int n = nums.size(), sum = 0, len = INT_MAX;
		for (int right = 0, left = 0; right < n; right++) {
			sum += nums[right];   // 进窗口
			while (sum >= target) // 判断
			{
				len = min(len, right - left + 1);
				sum -= nums[left++]; // 出窗口
			}
		}
		return len == INT_MAX ? 0 : len;
	}
};

class Solution {
public:
	int lengthOfLongestSubstring(string s) 
	{
		int hash[128] = {0};
		int left = 0, right = 0, n = s.size();
		int ret = 0;
		while(right < n)
		{
			hash[s[right]]++;  // 进入窗口
			while(hash[s[right]] > 1)  // 判断
			{
				hash[s[left++]]--;
			}
			ret = max(ret, right - left + 1);
			right++;
		}
		return ret;
	}
};

class Solution {
public:
	int longestOnes(vector<int>& nums, int k) 
	{
		int ret = 0;
		for(int left = 0, right = 0, zero = 0; right < nums.size(); right++)
		{
			if(nums[right] == 0)
				zero++;  // 进窗口
			while(zero > k)  // 判断
				if(nums[left++] == 0)
					zero--;
			ret = max(ret, right - left + 1);
		}
		return ret;
	}
};

class Solution {
public:
	int minOperations(vector<int>& nums, int x) 
	{
		int sum = 0;
		for(int a : nums)
			sum += a;
		int target = sum - x;
		// 细节问题
		if(target < 0)
			return -1;
		
		int ret = -1;
		for(int right = 0, left = 0, tmp = 0; right < nums.size(); right++)
		{
			tmp += nums[right];  // 进窗口
			while(tmp > target)  // 判断
				tmp -= nums[left++];  // 出窗口
			if(tmp == target)
				ret = max(ret, right - left + 1);
		}
		if(ret == -1)
			return -1;
		else
			return nums.size() - ret;
	}
};

//class Solution {
//public:
//vector<vector<int>> threeSum(vector<int>& nums) {
//sort(nums.begin(), nums.end());
//vector<vector<int>> ret;
//int n = nums.size();
//for(int i = 0; i < n; i++)
//{
//if(nums[i] > 0) break;
//int left = 1;
//int right = nums.size() - 1;
//int t = -nums[i];
//while(left < right)
//{
//int sum = nums[left] + nums[right];
//if(sum > t) right--;
//else if(sum < t) left++;
//else
//{
//ret.push_back({nums[i], nums[left], nums[right]});
//left++, right--;
//  while(left < right && nums[left] == nums[left - 1]) left++;
//    while(left < right && nums[right] == nums[right + 1]) right++;
//  }
//}
//  i++;
//    while(i < n && nums[i] == nums[i - 1]) i++;
//  }
//    return ret;
//  }
//};

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		int n = nums.size();
		sort(nums.begin(), nums.end());
		vector<vector<int>> ans;
		// 枚举 a
		for (int first = 0; first < n; ++first) {
			// 需要和上一次枚举的数不相同
			if (first > 0 && nums[first] == nums[first - 1]) {
				continue;
			}
			// c 对应的指针初始指向数组的最右端
			int third = n - 1;
			int target = -nums[first];
			// 枚举 b
			for (int second = first + 1; second < n; ++second) {
				// 需要和上一次枚举的数不相同
				if (second > first + 1 && nums[second] == nums[second - 1]) {
					continue;
				}
				// 需要保证 b 的指针在 c 的指针的左侧
				while (second < third && nums[second] + nums[third] > target) {
					--third;
				}
				// 如果指针重合，随着 b 后续的增加
				// 就不会有满足 a+b+c=0 并且 b<c 的 c 了，可以退出循环
				if (second == third) {
					break;
				}
				if (nums[second] + nums[third] == target) {
					ans.push_back({nums[first], nums[second], nums[third]});
				}
			}
		}
		return ans;
	}
};
