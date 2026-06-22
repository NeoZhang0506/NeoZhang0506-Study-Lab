class Solution {
public:
	int subarraySum(vector<int>& nums, int k) 
	{
		unordered_map<int, int> hash;
		hash[0] = 1;
		int sum = 0, ret = 0;
		for(auto x : nums)
		{
			sum += x;
			if(hash.count(sum - k))
				ret += hash[sum-k];  // 统计个数
			hash[sum]++;
		}
		return ret;
	}
};

class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) 
	{
		int n = nums.size();
		vector<int> f(n), g(n);
		
		// 1. 预处理一下前缀积数组以及后缀积数组
		f[0] = g[n-1] = 1;  // 细节问题
		for(int i = 1; i < n; i++)
			f[i] = f[i-1];
		for(int i = n-2; i>=0; i--)
			g[i] = g[i+1] * nums[i+1];
		// 2. 使用
		vector<int> ret(n);
		for(int i = 0; i<n;i++)
			ret[i] = f[i]*g[i];
		
		return ret;
	}
};
