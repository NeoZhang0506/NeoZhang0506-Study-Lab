class Solution {
public:
	bool isUnique(string astr) 
	{
		if(astr.size() > 26)
			return false;
		
		int bitMap = 0;
		for(auto ch : astr)
		{
			int i = ch - 'a';
			if(((bitMap >> i) & 1) == 1)
				return false;
			bitMap |= (1 << i);
		}
		return true;
	}
};

class Solution {
public:
	int missingNumber(vector<int>& nums) 
	{
		int ret = 0;
		for(auto i : nums)
			ret = ret^i;
		
		for(int j = 1; j <= nums.size(); j++)
			ret = ret^j;
		
		return ret;
	}
};

class Solution {
public:
	int getSum(int a, int b) 
	{
		while(b != 0)
		{
			int x = a^b;
			int carry = (a & b) << 1;
			a = x;
			b = carry;
		}
		return a;
	}
};
