#include <iostream>
#include <sstream>
#include <string>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

string serialize(TreeNode* root) {
    if (!root) return "#";
    return to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right);
}
TreeNode* deserializeHelper(queue<string>& nodes) {
    if (nodes.empty()) return NULL;

    string val = nodes.front();
    nodes.pop();
    if (val == "#") return NULL;

    TreeNode* root = new TreeNode(stoi(val));
    root->left = deserializeHelper(nodes);
    root->right = deserializeHelper(nodes);
    return root;
}

TreeNode* deserialize(string data) {
    stringstream ss(data);
    string item;
    queue<string> nodes;
    while (getline(ss, item, ',')) {
        nodes.push(item);
    }
    return deserializeHelper(nodes);
}
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);

    string serializedTree = serialize(root);
    cout << "Serialized Tree: " << serializedTree << endl;

    TreeNode* deserializedTree = deserialize(serializedTree);
    string verifySerializedTree = serialize(deserializedTree);
    cout << "Verify Serialized Tree: " << verifySerializedTree << endl;

    cout << "Serialization is " << (serializedTree == verifySerializedTree ? "correct" : "incorrect") << endl;

    return 0;
}
