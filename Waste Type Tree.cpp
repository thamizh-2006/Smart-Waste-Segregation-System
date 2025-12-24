#include <iostream>
#include <string>

using namespace std;

struct TreeNode {
    string data;
    TreeNode *left, *right;

    TreeNode(string d) {
        data = d;
        left = right = NULL;
    }
};

class WasteTree {
public:
    TreeNode *root;

    WasteTree() {
        root = new TreeNode("Waste");
        root->left = new TreeNode("Wet");
        root->right = new TreeNode("Dry");

        root->left->left = new TreeNode("Food");
        root->left->right = new TreeNode("Garden");

        root->right->left = new TreeNode("Plastic");
        root->right->right = new TreeNode("Metal");
    }

    void display(TreeNode *node, int level = 0) {
        if (node) {
            for (int i = 0; i < level; i++) cout << "  ";
            cout << node->data << endl;
            display(node->left, level + 1);
            display(node->right, level + 1);
        }
    }
};
