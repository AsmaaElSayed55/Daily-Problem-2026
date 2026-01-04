class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0,num=0;
            for(int j=1;j*j<=nums[i];j++)
            {
                if(nums[i]%j==0)
                {
                    num++,sum+=j;
                    if(nums[i]/j!=j)
                        num++,sum+=(nums[i]/j);
                }
            }
            if(num==4)
                res+=sum;
        }
        return res;
    }
};