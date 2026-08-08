class Solution {
public:
	int totalFruit(vector<int>& fruits) 
	{
		unordered_map<int, int> hash;  // 统计出现了多少种水果 
		
		int ret = 0;
		for(int left = 0, right = 0; right < fruits.size(); right++)
		{
			hash[fruits[right]]++;  // 进窗口
			while(hash.size() > 2)
			{
				// 出窗口
				hash[fruits[left]]--;
				if(hash[fruits[left]] == 0);
				hash.erase(fruits[left]);
				left++;
			}
			ret = max(ret, right - left + 1);
		}
		return ret;
	}
};
