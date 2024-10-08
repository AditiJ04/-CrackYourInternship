class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n=nums.size();
        int a=nums[0]*nums[1]*nums[2];
        int b=nums[n-1]*nums[n-2]*nums[n-3];
        int c=nums[0]*nums[1]*nums[n-1];
        int d=nums[0]*nums[n-1]*nums[n-2];

        int fmx=max(a,b);
        int lmx=max(c,d);

        return max(fmx,lmx);
    }
};