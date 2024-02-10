class pair{
    public:
    int chorihui;
    int chorinhihui;
    pair(){

        chorihui=chorinhihui=0;

    }
};
class solution{
    public:
    pair solve(treenode* root){
        pair p;
        //base case 
        if(!root){
            return p;
        }
        //recursive case 
        pair left=solve(root->left);
        pair right=solve(root->right);
        //1.root par chori karli 
        p.chorihui=root->val+left.chorinhihui+right.chorinhihui;
        //2.root par chori nahi kari
        p.chorinhihui=max(left.chorihui,left.chorinhihui)+max(right.chorihui,right.chorinhihui);
        return p;
    }
    int rob(treesnode*root){
        pair p=solve(root);
        return max(p.chorihui,p.chorinhihui);

    }
};
