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

class Solution {
public:
	void duplicateZeros(vector<int>& arr) {
		int n = arr.size();
		int top = 0;
		int i = -1;
		while (top < n) {
			i++;
			if (arr[i] != 0) {
				top++;
			} else {
				top += 2;
			}
		}
		int j = n - 1;
		if (top == n + 1) {
			arr[j] = 0;
			j--;
			i--;
		} 
		while (j >= 0) {
			arr[j] = arr[i];
			j--;
			if (!arr[i]) {
				arr[j] = arr[i];
				j--;
			} 
			i--;
		}
	}
};


