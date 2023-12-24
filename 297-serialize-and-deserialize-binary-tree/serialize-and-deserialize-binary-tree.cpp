class Codec {
public:
    string serialize(TreeNode* root) {
        if (!root) return "";
        string result;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            if (node) {
                result += to_string(node->val) + ",";
                q.push(node->left);
                q.push(node->right);
            } else {
                result += "null,";
            }
        }
        return result;
    }

    TreeNode* deserialize(string data) {
        int n = data.size();
        if (n == 0) return nullptr;

        queue<TreeNode*> q;
        string str;
        stringstream s(data);
        getline(s, str, ',');
        TreeNode* root = new TreeNode(stoi(str));
        q.push(root);

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            // Process left child
            getline(s, str, ',');
            if (str != "null") {
                TreeNode* leftNode = new TreeNode(stoi(str));
                node->left = leftNode;
                q.push(leftNode);
            }

            // Process right child
            getline(s, str, ',');
            if (str != "null") {
                TreeNode* rightNode = new TreeNode(stoi(str));
                node->right = rightNode;
                q.push(rightNode);
            }
        }

        return root;
    }
};
