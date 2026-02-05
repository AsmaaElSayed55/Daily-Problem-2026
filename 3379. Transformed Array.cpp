class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> res(nums.size());
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                res[i]=nums[(i+nums[i])%n];
            else if(nums[i]<0)
                {
                    int temp=i-abs(nums[i]);temp%=n;
                    if(temp<0)temp+=n;
                    res[i]=nums[temp];
                }
            else res[i]=nums[i];
        }
        return res;
    }
};