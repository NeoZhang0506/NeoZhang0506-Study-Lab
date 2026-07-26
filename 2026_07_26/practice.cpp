class Solution {
public:
	int tribonacci(int n) 
	{   
		// 状态表示
		if(n == 0) return 0;
		if(n == 1 || n == 2) return 1;
		
		vector<int> dp(n + 1);
		dp[0] = 0, dp[1] = 1, dp[2] = 1;
		for(int i = 3;i < n + 1; i++)
		{
			dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]);
		}
		return dp[n];
		
	}
};

class Solution {
public:
	int waysToStep(int n) 
	{
		if(n == 1) return 1;
		if(n == 2) return 2;
		if(n == 3) return 4;
		const int MOD = 1e9 + 7; 
		vector<unsigned long long> dp(n + 1);
		dp[0] = 1, dp[1] = 2, dp[2] = 4;
		
		for(int i = 3; i < n; i++)
		{
			dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
		}
		return dp[n - 1];
	}
};

class Solution {
public:
	bool lemonadeChange(vector<int>& bills) 
	{
		int five = 0, ten = 0;  // 记录钞票个数
		for(int i = 0; i < bills.size(); i++)
		{
			if(bills[i] == 5)  // 5元直接收下
				five++;
			else if(bills[i] == 10)  // 10元分两种情况
			{
				if(five == 0)  // 没有5元找不开, 返回false
					return false;
				else  // 有5元
				{
					five--;
					ten++;
				}
			}
			else  // 20元分三种情况
			{
				if(ten == 0)
				{
					if(five < 3)
						return false;
					else
						five -= 3;
				}
				else
				{
					if(five == 0)  
						return false;
					else
					{
						ten--;
						five--;
					}
				}
				
			}
		}
		return true;    
	}
};
