/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
  int sum(struct Node* root){
      if(root==NULL){
          return 0;
      }
      return sum(root->left)+sum(root->right)+root->data;
  }
    bool isSumTree(Node* root) {
        int ls = sum(root->left);
        int rs = sum(root->right);
        if(root==NULL || (root->left==NULL && root->right==NULL)){
            return true;
        }
        if((root->data == ls+rs) && isSumTree(root->left) && isSumTree(root->right) ){
            return true;
        }
        return false;
        
    }
};