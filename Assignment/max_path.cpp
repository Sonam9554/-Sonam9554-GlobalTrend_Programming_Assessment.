#include <iostream>
#include <algorithm>  // For max function

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
  int findPath(TreeNode* root,int &ans){
        if(!root){
            return 0;
        }
        int left = findPath(root->left,ans);
        int right = findPath(root->right,ans);
        int straight = max(root->val,max(left+root->val,right+root->val));
        int curved = left+right+root->val;
        ans = max(ans,max(straight,curved));
        return straight;
    }
    int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    int ans = INT8_MIN;
    int result = findPath(root,ans);
    cout << "Maximum Path Sum: " << result << endl;

    return 0;
}
