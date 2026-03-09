class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       
        int product=1;
        int left=0;
        int right=0;
        int c=0;
        for(right=0;right<nums.size();right++)
        {
            product=product*nums[right];
            while(product>=k&&right>=left)
            {
                product=product/nums[left];
                left++;
            }
            c=c+(right-left+1);
        }
        return c;
        
    }
};
