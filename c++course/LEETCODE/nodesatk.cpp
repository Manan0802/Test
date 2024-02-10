class solution{
    public:
    vector<int> v;
    void findnodes(treenode* root,int d,int k){
        //base case

        //reursive case
        if(d==k){

            v.push_back(root->data);
            return;
        }
        findnodes(root->left,d+1,k);
        findnodes(root->right,d+1,k);

    }
    vector<int k>

}
