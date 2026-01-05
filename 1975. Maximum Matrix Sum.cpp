class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long res=0,neg=0; int mn=1e9;
        for(auto i:matrix)
        {
            for (auto j:i)
            {
                if(j<0) neg++;
                res+=abs(j);
                mn=min(mn,abs(j));
            }
        }
        if(neg%2) res-=2*mn;
        return res;

    }
};