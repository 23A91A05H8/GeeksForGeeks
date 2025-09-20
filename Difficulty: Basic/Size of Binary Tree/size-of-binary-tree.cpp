/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int getSize(Node* node) {
       if(node == 0){
           return 0;
       }
       int left = getSize(node->left);
       int right = getSize(node->right);
       return left+right+1;
        
    }
};