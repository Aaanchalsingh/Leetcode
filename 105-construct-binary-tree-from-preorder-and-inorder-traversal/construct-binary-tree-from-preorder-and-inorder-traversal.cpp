class Solution {
public:
    map<int,int> mp;
    TreeNode* build(vector<int> preorder, vector<int> inorder,int prestart,int preend,int instart,int inend){

        if(prestart>preend||instart>inend) return NULL;
        TreeNode*root=new TreeNode(preorder[prestart]);
        int inroot=mp[root->val];
        int nums=inroot-instart;
        root->left=build(preorder,inorder,prestart+1,prestart+nums,instart,inroot-1);
        root->right=build(preorder,inorder,prestart+nums+1,preend,inroot+1,inend);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++) mp[inorder[i]]=i;
        return build(preorder,inorder,0,preorder.size()-1,0,inorder.size()-1);
    }
};