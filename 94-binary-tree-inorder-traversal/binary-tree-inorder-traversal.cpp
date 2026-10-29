/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        stack<TreeNode*> st;
        vector<int> ans;

        TreeNode* temp = root;
        while(true){
            if(temp != nullptr){
                st.push(temp);
                temp=temp->left;
            }
            else {
                if(st.empty()) break;

                TreeNode* topp = st.top();
                st.pop();
                ans.push_back(topp->val);
                temp = topp->right;
            }
        }

        return ans;
    }
};