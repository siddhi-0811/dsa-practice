class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even=0;
        for(int i=0; i<nums.size(); i++){
            long long temp=nums[i];
            long long count=0;
            while(temp>0){
                temp=temp/10;
                count++;
            }
            if(count%2==0) even++;
        }
        return even;
    }
};