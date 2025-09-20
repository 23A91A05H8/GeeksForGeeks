/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    int findMax(Node *root) {
        if(root==NULL){
            return INT_Max;
        }
        int left = findMax(root->left);
        int right = findMax(root->right);
        return max(root->data,max(left,right));
    }

    int findMin(Node *root) {
       if(root==NULL){
            return INT_MIN;
        }
        int left = findMin(root->left);
        int right = findMin(root->right);
        return min(root->data,min(left,right));
    }
};