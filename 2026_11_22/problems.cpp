class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash; // <nums[i], i>
        for(int i = 0; i < nums.size(); i++)
        {
            int x =target - nums[i];
            if(hash.count(x))   
                return {hash[x], i};
            hash[nums[i]] = i;
        }

        // 照顾编译器
        return {-1, -1};
    }
};

class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        if(s1.size() != s2.size())
            return false;

        int hash[26] = { 0 };
        // 先统计第一个字符串的信息
        for(auto ch : s1)
            hash[ch - 'a']++;

        // 扫描第二个字符串，看看能否重排
        for(auto ch : s2)
        {
            hash[ch - 'a']--;
            if(hash[ch - 'a'] < 0)
                return false;
        }
        return true;
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set<int> hash;
        for(auto x : nums)
            if(hash.count(x))
                return true;
            else 
                hash.insert(x);
            return false;
    }
};

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++)
        {
            if(hash.count(nums[i]))
                if(i - hash[nums[i]] <= k)
                    return k;
            hash[nums[i]] = i;
        }
        return false; 
    }
};