class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int res=1e9;
        sort(nums.begin(),nums.end());
        for(int i=0;i+k<=nums.size();i++)
        {
            res=min(res,abs(nums[i]-nums[i+k-1]));
        }
        return res;
    }
};