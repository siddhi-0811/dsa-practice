class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        long long sum=0;
        vector<int> sums(nums.size());
        for(int i=0; i<nums.size(); i++){
            sum=sum+nums[i];
            sums[i]=sum;
        }
        return sums;
    }
};