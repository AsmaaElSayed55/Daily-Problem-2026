class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int res=nums[0];
        int num1=60,num2=60;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<num1) num2=num1,num1=nums[i];
            else
            {
                if(nums[i]<num2) num2=nums[i];
            }
        }
        return res+num1+num2;
    }
};