class Solution {
public:
	int hammingWeight(int n) 
	{
		int count = 0;
		while(n)
		{
			n = n & (n - 1);
			count++;
		}
		return count;
	}
};

class Solution {
public:
	vector<int> countBits(int n) 
	{
		vector<int> ret(n + 1);
		for(int i = 0; i <= n; i++)
		{
			int count = 0; 
			while(i)
			{
				i &= i - 1;
				count++; 
			}
			ret[i] = count;
		}
		return ret;
	}
};

class Solution {
public:
	int hammingDistance(int x, int y) 
	{
		int same_bit = x^y;
		int count = 0;
		while (same_bit)
		{
			same_bit &= same_bit - 1;  
			count++;
		} 
		return count;
	}
};
