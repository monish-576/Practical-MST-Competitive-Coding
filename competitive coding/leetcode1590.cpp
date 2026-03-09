class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        long long total = 0;
        for(int x : nums)
            total += x;
        int r = total % p;
        if(r == 0)
            return 0;
        int ans = n;
        for(int i = 0; i < n; i++) {
            long long sub = 0;
            for(int j = i; j < n; j++) {
                sub += nums[j];
                if(sub % p == r) {
                    ans = min(ans, j - i + 1);
                }
            }
        }
        if(ans == n)
            return -1;
        return ans;
    }
};  
         
