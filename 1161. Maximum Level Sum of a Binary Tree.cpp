class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        long long res=1,sum=0,level=1,total_sum=-1e18;
        queue<TreeNode*>q; q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* node=q.front(); q.pop();
                sum+=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(sum>total_sum)
            {
                total_sum=sum;
                res=level;
            }
            level++;sum=0;
        }

        return res;
    }
};