class Solution
{
public:
	int maxArea(vector<int>& height) 
	{
		int right = height.size() - 1;
		int left = 0;
		int ret = 0;
		while(left < right)
		{
			int v = min(height[left], height[right]) * (right - left);
			ret = max(ret, v);
			if(height[left] < height[right])
				left++;
			else
				right--;
		}
		return ret;
	}
};

class Solution {
public:
	void moveZeroes(vector<int>& nums) 
	{
		for(int cur = 0, dest = -1; cur < nums.size(); cur++)
		{
			if(nums[cur] != 0)
			{
				swap(nums[cur], nums[dest+1]);
				dest++;
			}
		}    
	}
};

class Solution
{
public:
	int bitSum(int n)
	{
		int sum = 0;
		while(n)
		{
			int t = n % 10;
			sum += t * t;
			n /= 10;
		}
		return sum;
	}
	bool isHappy(int n) 
	{
		int slow = n, fast = bitSum(n);
		while(slow != fast)
		{
			slow = bitSum(slow);
			fast = bitSum(bitSum(fast));
		}
		return fast == 1;
	}
};

class Solution
{
public:
	void duplicateZeros(vector<int>& arr) 
	{
		// 1. 先找到最后一个数
		int cur = 0, dest = - 1, n = arr.size();
		while(cur < n)
		{
			if(arr[cur])
				dest++;
			else
				dest += 2;
			if(dest >= n - 1)
				break;
			cur++;
		}
		// 2. 处理一下边界情况
		if(dest == n)
		{
			arr[n-1] = 0;
			cur--;
			dest -= 2;
		}
		// 3. 从后向前完成复写操作
		while(cur >= 0)
		{
			if(arr[cur])
				arr[dest--] = arr[cur--];
			else
			{
				arr[dest--] = 0;
				arr[dest--] = 0;
				cur--;
			}
		}
	}
};
