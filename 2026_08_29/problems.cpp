class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        if (croakOfFrogs.size() % 5 != 0) {
            return -1;
        }
        int res = 0, frogNum = 0;
        vector<int> cnt(4);
        unordered_map<char, int> mp = {{'c', 0}, {'r', 1}, {'o', 2}, {'a', 3}, {'k', 4}};
        for (char c : croakOfFrogs) {
            int t = mp[c];
            if (t == 0) {
                cnt[t]++;
                frogNum++;
                if (frogNum > res) {
                    res = frogNum;
                }
            } else {
                if (cnt[t - 1] == 0) {
                    return -1;
                }
                cnt[t - 1]--;
                if (t == 4) {
                    frogNum--;
                } else {
                    cnt[t]++;
                }
            }
        }
        if (frogNum > 0) {
            return -1;
        }
        return res;
    }
};


class Solution {
public:
    string countAndSay(int n) 
    {
        string ret = "1";
        for(int i = 1; i < n; i++)
        {
            string tmp;
            int len = ret.size();
            for(int left = 0, right = 0; right < len; )
            {
                while(right < len && ret[left] == ret[right])
                    right++;
                tmp += to_string(right - left) + ret[left];
                left = right;
            }
            ret = tmp;
        }
        return ret;
    }
};