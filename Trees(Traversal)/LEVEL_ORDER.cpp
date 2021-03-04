class Solution {
public:
    vector<vector<int>> result;
    
    void buildVector(TreeNode *root, int depth)
    {
        if(root == NULL) 
            return;
        if(result.size() == depth)
            result.push_back(vector<int>());
    
        result[depth].push_back(root->val);
        buildVector(root->left, depth + 1);
        buildVector(root->right, depth + 1);
    }

    vector<vector<int> > levelOrder(TreeNode *root) 
    {
        buildVector(root, 0);
        return result;
    }
};
