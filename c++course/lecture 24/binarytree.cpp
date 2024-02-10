#include<iostream>
#include<queue>
using namespace std;
class node {
public:
	int data;
	node*left, *right;
	node(int d) {
		data = d;
		left = right = NULL;//intialy left aur right ko null rkahaa 
	}
};
//////////////// tree input ///////////////////////////////////////////////////////
node* createtree(){
    int data;
    cin>>data;//phale hume left side pe check marenge fir right side mai jaha data nhi hogaa udhar -1 dalegaa aur fir call back hoke right pe call 
    if(data==-1){
        return NULL;
    }
    node* r=new node(data);// data ka input karwaya uski ek new node bani humne jo ki root node ho hogi 
    r->left=createtree();//recursion se hunne left subtree banwayaa aur usko huumne root ke left mai store karadia 
    r->right=createtree();// recursion se humne right subtree banwaya aur usko humne root ke right mai hi kardia store 
    return r;//rrot lo return karadia 

}
//////////////////////////input ///////////////////////////




//////////////////////// print ////////////////////////////////////////
void preOrder(node* root) {
	if (!root) return;

	cout << root->data << " ";//sabse pahel humne root ka data ko print karwadia 
	preOrder(root->left);//fir left 
	preOrder(root->right);//fir right 
}

void inOrder(node* root) {
	if (!root) return;

	inOrder(root->left);//sabse pahle left 
	cout << root->data << " ";//fir root 
	inOrder(root->right);//fit right 
}


void postOrder(node* root) {
	if (!root) return;

	postOrder(root->left);//recursion se left 
	postOrder(root->right);//right
	cout << root->data << " ";//root 
}
//////////////////////////////count node ///////////////////
int countnode(node* root){
   // base case
   if(!root){
    return 0;//nhai root null hai tree hai hee nhi ans 0 

   }
   //recursive case
   return countnode(root->left)+ countnode(root->right)+1;//recusion ne left ki nodes bata di + recursion se right ki nodes + 1(jo ki humne root node ko add karaa hai )
   //lst_count=countnode(root->left);
   //rst_count=countnode(root->right);
   //return lst_count+rst_count+1;
}
////////////////////////////////////////heghit /////////////////////////////////////////
int height(node* root){
    if(!root)return 0;//bhyi tree hee nhi hai toh height 0 
    return max(height(root->left),height(root->right))+1;// left ki height mangi right ki height mangi in dono ka he max liyaa aur iski max mai add one kardiaa jo root ki height hai 

}
int diameter(node* root){
    //base case
    if(!root)return 0;//tree nhi hai diameter 0
    // recursive rln
    int o1=height(root->left)+ height(root->right);//yeh case 1 hai jissme diameter mai root ke through pass hota ja raha hai toh is case mai hum wahi karenge lst and rst ka sum 
    int o2=diameter(root->left);//ismme diameter jo hai wo lst mai hi exist kar gaya 
    int o3=diameter(root->right);//isme diameter jo hai wo right mai hi aagyaa 
    return max(o1,max(o2,o3));//humara ans max hogaa inn teeno option mai 
}
class Pair{
    public:
    int height;//humne pair returun karwaya issme ek hogi height ek hogaa diameter jisko humne sath sath return karwaaya 
    int diameter;
    Pair(){
        height=diameter=0;
    }
    
};
Pair fastdiameter(node* root){
    //base case
    if(!root){
        Pair p; //pair p  bana llia jispe humare 
        return p;

    }
    // recursive case
    //time complexity O(n)
    Pair left=fastdiameter(root->left);//left ka pair 
    Pair right=fastdiameter(root->right);//right ka pair 
    Pair p;
    p.height=max(left.height,right.height)+1;//pair mai height returun karwai hai 
    int o1=left.height+right.height;//via rrot ke through transverse 
    int o2=left.diameter;//left subtree 
    int o3=right.diameter;//right subtree 
    p.diameter=max(o1,max(o2,o3));//wahi same kara isme ek bar node pe jana hai 
    return p;
}
node* findnode(node* root,int x){
    if(!root){
        return NULL;//kuch bhi hnhi hai toh null ko return karwadiaa 

    }
    if(root->data == x){
        return root;//root node ke liye humne dekhaaa bakki ka recursion ko bolaa hai 
    }
    node* left=findnode(root->left,x);//sabse phle recursiom ko left mai check karne ke liyee bollaa 
    if(left){//left mai mil gaya exist krta hai 
        return left;//left ko return karwaia
    }
    node* right=findnode(root->right,x);//left mai nhi milaa fir right mai dekhaa 
    if(right){
        return right;//in the end kuch toh retuun karwanege either null ya kuch bhi 
    }
    return NULL;
}
//////////////////mirror/////////////////////////
void mirror(node* root)

{
	if(!root)
	{
		return;//tree exist nhi kataa kuch returun nhi 
	}
	swap(root->left,root->right);// root ke bacche badal lie humne 
	mirror(root->left);//left ko badal liya  mirror krke 
	mirror(root->right);//right ko badal  liya mirror krke 
}

///////////////////////////// level printing ////////////////////////////////////////////
void levelorderprint(node* root){
    queue<node*>q;//humne que mai node  ka  addresss andar dalna hai 
    q.push(root);//sabse phale humne root ko push kara 
    q.push(NULL);//fir humne null ko push kardia jissse level0 ki end pata lag gyaa
    while(!q.empty()){ //ab jab tak que empty nhi hoti tab tak kam karo 
        node*x=q.front();//humne sabse top wlaa element store kara(x) aur dekaha
        q.pop();// bhar nikala 2 possibiliites ya toh null ya koi node 
        if(x!=NULL){
            cout<<x->data<<" ";//data ko print kara aur check kara kaya childeren exist  karte hai 
            if(x->left != NULL){ //left ka children exist karta hai 
                q.push(x->left);//toh humne left ke children ko que mai push kardia 
            }
            if(x->right != NULL){//right ka children ka exist karta hai 
                q.push(x->right);//right ke children ko que mai push kardia 
            }
        }
        else{// maine null hai 
            cout<<endl;//null ka mtlb ek levell pura khtm abb  agale level pe aao jo ki mane next line se shuru 
            if(!q.empty()){ //jab tak que empty nhi hoti level segregation ke liye hee humne null push karte rahee 
                q.push(NULL);
            }
        }
    }//yeh work karaa jab takk que empty nhi 
}
/////////////   level wise input ///////////////////////////
node* levelordercreatetree(){
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    node* root=new node(data);
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* x=q.front();
        q.pop();
        cout<<"enter childremn of "<<x->data<<endl;
        int left,right;
        cin>>left>>right;
        if(left != -1){
            x->left=new node(left);
            q.push(x->left);
        }
        if(right != -1){
            x->right=new node(right);
            q.push(x->right);
        }

    }
    return root;
}
////////////////// tree via pre and in order given //////////////////////////////////////////
int pre[]={8,10,1,6,4,7,3,14,13};
int in[]={1,10,4,6,7,8,3,13,14};
int n=sizeof(pre)/sizeof(int);
int k=0;
node* buildtree(int s,int e){
    if(s>e){//start jo hai woo end ko overshoot kargaya 
        return NULL;//null return hojayega 
    }
    node* root=new node(pre[k]);//preorder ka phale humesha root hota hai isliye humne nayi node baandi root toh root node ban gaye 

    int indx=-1;//yeh existr he nhi karta toh -1 se intialise karlia 
    for(int i=s;i<=e;++i){
        if(in [i] == pre[k]){//humne inorder mai root ko dekhaa taki usse phale walle mai left subtree aur badd walle  mai right 

            indx=i;//jaise mila brabar kardiaa 
            break;//milte he bhar nikal gye loop se kam hogyaa 
        }
    }
    k++;//yeh aage shift karaa 
    root->left=buildtree(s,indx-1);//recursion se left subtree build  karwaya 
    root->right=buildtree(indx+1,e);//recursion se he rigght subtree build karwadiya 

    return root;

}


    

int main(){
    node* root = NULL;

	// root = createtree();
    //root = levelordercreatetree();
    //int in[]={1,10,4,6,7,8,3,13,14};
    root=buildtree(0,n-1);

	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
    levelorderprint(root);
    mirror(root);
    levelorderprint(root);
   // cout<<countnode(root)<<endl;
   // cout<<height(root)<<endl;
   // cout<<diameter(root)<<endl;
   // Pair p=fastdiameter(root);
   // cout<<p.height<<endl;
    //cout<<p.diameter<<endl;
   // cout<<"enter node to found:"<<endl;
   //int x;
   // cin>>x;
    //findnode(root,x);
	return 0;
}
 