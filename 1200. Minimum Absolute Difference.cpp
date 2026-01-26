class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int res=1e9;
        vector<vector<int>> ans;
        for(int i=0;i<arr.size()-1;i++)
        {
            res=min(res,abs(arr[i]-arr[i+1]));
        }
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                if(abs(arr[i]-arr[j])==res)
                    ans.push_back({arr[i],arr[j]});
                else break;
            }
        }
        return ans;
    }
};