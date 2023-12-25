class Solution {
public:
     map<int,int> mp;
    TreeNode* build(vector<int> postorder, vector<int> inorder,int poststart,int postend,int instart,int inend){

        if(instart>inend) return NULL;
        TreeNode*root=new TreeNode(postorder[postend]);
        int inroot=mp[root->val];
        int nums=inroot-instart;
        root->left=build(postorder,inorder,poststart,poststart+nums-1,instart,inroot-1);
        root->right=build(postorder,inorder,poststart+nums,postend-1,inroot+1,inend);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i=0;i<inorder.size();i++) mp[inorder[i]]=i;
        return build(postorder,inorder,0,postorder.size()-1,0,inorder.size()-1);

    }
};