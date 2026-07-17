class Solution {
public:
    string convert(string s, int numRows) 
    {
        string ret;
        if(numRows == 1) return s;
        int d = 2 * numRows - 2, n = s.size();
        // 1. 处理第一行
        for(int i = 0; i < n; i+=d)
            ret += s[i];
        // 2. 处理中间行
        for(int k = 1; k < numRows -1; k++)
            for(int i = k, j = d - k; i < n || j < n; i += d, j += d)
            {
                if(i < n) ret += s[i];
                if(j < n) ret += s[j];
            }
        // 3. 处理最后一行
        for(int i = numRows - 1; i < n; i+=d)
            ret += s[i];
        return ret; 
    }
};

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ret = 0;
        for(int i = 1; i < timeSeries.size(); i++)
        {
            int x = timeSeries[i] - timeSeries[i - 1];
            if(x >= duration)
                ret += duration;
            else
                ret += x; 
        }
        return ret += duration;
    }
};
