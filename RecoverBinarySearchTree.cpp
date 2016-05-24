/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
        void swap( int* a, int* b )
        {
            int t = *a;
            *a = *b;
            *b = t;
        }
        void correctBSTUtil( struct TreeNode* root, struct TreeNode** first,
                             struct TreeNode** middle, struct TreeNode** last,
                             struct TreeNode** prev )
        {
            if( root )
            {
                // Recur for the left subtree
                correctBSTUtil( root->left, first, middle, last, prev );
         
                // If this node is smaller than the previous node, it's violating
                // the BST rule.
                if (*prev && root->val < (*prev)->val)
                {
                    // If this is first violation, mark these two nodes as
                    // 'first' and 'middle'
                    if ( !*first )
                    {
                        *first = *prev;
                        *middle = root;
                    }
         
                    // If this is second violation, mark this node as last
                    else
                        *last = root;
                }
         
                // Mark this node as previous
                *prev = root;
         
                // Recur for the right subtree
                correctBSTUtil( root->right, first, middle, last, prev );
            }
        }
    void recoverTree(TreeNode *root) {
        // Initialize pointers needed for correctBSTUtil()
    struct TreeNode *first, *middle, *last, *prev;
    first = middle = last = prev = NULL;
 
    // Set the poiters to find out two nodes
    correctBSTUtil( root, &first, &middle, &last, &prev );
 
    // Fix (or correct) the tree
    if( first && last )
        swap( &(first->val), &(last->val) );
    else if( first && middle ) // Adjacent nodes swapped
        swap( &(first->val), &(middle->val) );
 
    // else nodes have not been swapped, passed tree is really BST.
    }
};