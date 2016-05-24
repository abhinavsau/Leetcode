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
TreeNode* utilSortedArrayToBST(vector<int> &arr,int start,int end)
{
    if(start > end)
        return NULL;
    int mid = (start+end)/2;
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = arr[mid];
    root->left = utilSortedArrayToBST(arr,start,mid-1);
    root->right = utilSortedArrayToBST(arr,mid+1,end);
    
    return root;
}
    TreeNode *sortedArrayToBST(vector<int> &num) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        return utilSortedArrayToBST(num,0,num.size()-1);
        
    }
};