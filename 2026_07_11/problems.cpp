class Solution {
public:
	string modifyString(string s) 
	{
		int n = s.size();
		for(int i = 0; i < n; i++)
		{
			if(s[i] == '?')
			{
				for(char ch = 'a'; ch <= 'z'; ch++)
				{
					if((i == 0 || ch != s[i-1]) && (i == n-1 || ch != s[i+1])) 
					{
						s[i] = ch;
						break;
					}
				}
			}
		}
		return s;
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

class Solution {
public:
	int singleNumber(vector<int>& nums) 
	{
		int ret = 0;
		for(int i = 0; i < 32; i++)
		{
			int sum = 0;
			for(int x : nums)
				if(((x >> i) & 1) == 1)
					sum++;
			sum %= 3;
			if(sum == 1) 
				ret |= 1 << i;
		}
		return ret;
	}
};
