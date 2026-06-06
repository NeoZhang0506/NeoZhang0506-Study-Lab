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
