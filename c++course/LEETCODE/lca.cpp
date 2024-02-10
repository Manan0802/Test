class solution{
    public:
    TreeNode* lowestCommonAncestor(TreeNode* root,TreeNode* p,TreeNode* q){
        //base case
        if(!root){
            return NULL;
        }
        //recursive case
        //1.agr root par hi koi p/q exist karna hai,toh root hi lca hai 
        if(root == p or root == q){
            return root;
        }
        //2.root node ke lst lst me ek lca hai ,ek rst mai lca hai 
        //thismeans root is  lca 
        if(left amd right)return root;
        if(left)return left;
        if(right)return right;
        return NULL;

    }
    
}