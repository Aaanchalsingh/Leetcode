class Solution {
public: 
    bool match(TreeNode* root, TreeNode* subRoot){
        if(!subRoot&&!root) return true;
        if(!subRoot||!root) return false;
        if(root->val!=subRoot->val) return false;
        return match(root->left,subRoot->left)&&match(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!s||!t)return false;
        else if(match(s,t))return true;
        return isSubtree(s->left,t) || isSubtree(s->right,t);
    }
};
