#include <iostream>
#include <queue>
#include<cmath>
#include<climits>
using namespace std;

class node {
public:
	int data;
	node*left, *right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* insertInBST(node* root, int data) {
	if (!root) {
		root = new node(data);//jo bhi pahla data aaya hai usko root mai hee dalao toh usko rooot banake daldia 
		return root;
	}

	if (data < root->data) {
		root->left = insertInBST(root->left, data);//bhyi agar data root ke  data se chhota haai toh left mai insert kardo 
	}
	else {
		root->right = insertInBST(root->right, data);//warna badda hai toh right mai 
	}
	return root;
}

node* createTree() {
	int data;
	cin >> data;
	node* root = NULL;
	while (data != -1) {//jab tak data -1 nhu
		root = insertInBST(root, data);

		cin >> data;
	}
	return root;
}
//printing remains same  as iin binary tree no  change 
void preOrder(node* root) {
	if (!root) return;

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(node* root) {
	if (!root) return;

	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}


void postOrder(node* root) {
	if (!root) return;

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

void printInRange(node* root, int k1, int k2) {
	if (!root) {
		return;
	}
	if (root->data >= k1 and root->data <= k2) cout << root->data << " ";//root ke data pe dekhaa 
	printInRange(root->left, k1, k2);//left wale subtree mai dekha  
	printInRange(root->right, k1, k2);//right wale subtree mai dekha 
}
//normal method hua ke bhai recursive function banaya root kaa humne  check kiya balanced haiu ke nhi 
// left and right ka recursion ko bbool  diya 
//if root wlaa balancde and left wla bhi and right walal bhi balnced toh is balance isme time o of n^2
class Pair{//pair  banayaa 
	public: 
	int height;//ek height hai issme 
	bool isbalanced;//ek jo batyega balnced hai ya nhi 
};
Pair checkheightbalance(node* root){
	if(!root){//tree exist nhi kkrta
		Pair P;
		P.height=0;//toh heigght 0 hai 
		P.isbalanced=true;//balance toh hogaa he 
		return P;

	}
	Pair P;
	Pair left=checkheightbalance(root->left);//left   mai check karaaa kee balanced hai  ke nhii  
	Pair right=checkheightbalance(root->right);//right ,,  ,,   ,,,,,, ,,, ,,,,,,,, ,,,  ,, ,,,, 
	P.height=max(left.height,right.height)+1;//heght toh max +1 hee hoti hai 
	P.isbalanced=(abs(left.height-right.height)<=1 and left.isbalanced and right.isbalanced)? true:false;
	//humne check karaa kke bhyi root ke about abs 1 hona chhoye fir left ki balancing and fir right ke balancing 
	return P;
}

node* searchBST(node* root, int key) {
	if (!root) {
		return NULL;//tree he exist nu kartaa 
	}

	if (root->data == key) return root;//root pe hi mil gaya 
	if (root->data > key) {//agar key ki value roo dtaa se baddi hai left ko reject karke right mai check karoge 
		return searchBST(root->right, key);
	}
	else {
		return searchBST(root->left, key);//warna fir left mai he check karo 
	}
	//time complexity o(n) maiu hoagaya
}

bool isBST(node*root, int mi = INT_MIN, int mx = INT_MAX) {//mi maine mmin lelia aur ek mx mane max 
	if (!root) return true;//tree hai hhee nhi toh bst hogaa he 

	if (root->data >= mi and root->data <= mx and     //root jo hai wo -infity se +infinity ke beech mai exist karegaa toh koi issue ni 
	        isBST(root->left, mi, root->data) == true and //left subtree pass kara -infity se dekha aur right  walali value  pe root ke aajyegi upadtaion mai 

	        isBST(root->right, root->data, mx) == true) {//right subtree pass kara +infity se dekha aur  walali value  pe root ke aajyegi upadtaion mai 
		return true;//agar teeno conditions treu hoi toh yes iitt is a bst 
	}
	else {
		return false;
	}
}//timme complexity o(n)
//slower methood hai ke bhai left subtree mai se sabse baddi value aur right mai  sabse valuue isko root se coompare kara 
//left<root<right aise isme o(n^2)

void levelOrderPrint(node * root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while (!q.empty()) {
		node* x = q.front();
		q.pop();

		if (x != NULL) {
			cout << x->data << " ";
			if (x->left != NULL) {
				q.push(x->left);
			}
			if (x->right != NULL) {
				q.push(x->right);
			}
		}
		else {
			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}
		}
	}
}
class linklist{
	public:
	node* head,*tail;//class linklist banayi jism humne heaad tail rakha humne oi nayi ll nhi banani isliye aise banayi 
	linklist(){
	head=tail=NULL;
	}
};
linklist bsttoll(node* root){
	//base case
	linklist l;//ll  bana li 
	if (!root) {// tree he nhhi  hai toh khali list returun kardi 
		return l;
	}
	//recursive case 
	//case 1-issme lst and rst dono present hai 
	if(root->left and root->right ){
		linklist left=bsttoll(root->left);//recursion se lst ko left linklist mai (sorted) mai lelia 
		linklist right=bsttoll(root->right);//recursion se rst ko right linklist mai (sorted) mai lelia 
		left.tail->right=root;//humne isme lst mai jo humne tailL aaya hai usko root se connect kara kyuki humne root ko lst aur rst ke beech mai rakhna hai 

		root->right=right.head;//root ko humne rst se connect kiyaa 
		linklist l;
		l.head=left.head;//jo ll bani uska head bana diyaa 
		l.tail=right.tail;//jo ll baani ussi ka tail 
		return l;//ll returun final walli 
	}
	// case 2-lst nahi hai but rst hai 
	else if(!root->left and root->right){
		linklist right=bsttoll(root->right);//recursion se right bst ll mai converted 
		root->right=right.head;//root ko usse join kara 
		l.head=root;//abb humara is ll mai jo root hai wo he head hoga 
		l.tail=right.tail;//aur jo tail humare ko mili wo humari ll ki tail 
		return l;
	}
	//case 3 lst j=hai rst nhi 
	else if(root->left and !root->right){
		linklist left = bsttoll(root->left);//recursio se lst ka kam karwadia 
		// 1->2->3     8     NULL

		left.tail->right = root;//huare ko jo end ki tail mili usko humne root se jod diyaa 
		// 1->2->3---->8     NULL
		l.head = left.head;//jo head tha wo main ll ka head hogaya 
		l.tail = root;//tail humari root ban gayi 
		// l.head->1->2->3---->8<-l.tail    NULL
		return l;
	}
	//case4 na hi lst hai na he rst toh root hi humara head tail sab hogaa 
	else {
		// NULL    8     NULL
		l.head = l.tail = root;
		// NULL    l.head->8<-l.tail     NULL
		return l;
	}
}
	
//primt ll 
void printLL(node* root) {
	while (root) {
		cout << root->data << "-->";
		root = root->right;
	}
	cout << "NULL\n";
}
//creating balanced bst with the  help of  a sorteed aaray
node* treeinsortedarray(int a[],int s,int e ){
	//base case
	if(s>e){
		return NULL;//array ko pura ghumliaa stop hona hai 
	}
	//recursive case
	int m=(s+e)/2;//sabse phale sorted aarya mai humne middle element nikaliya jo humara root node banega 
	node* root=new node(a[m]);//missle walle ko hi root bnaa rahe hai 
	root->left=treeinsortedarray(a,s,m-1);//abb usi array mai mi se phale walle jo bhi haoi wo lst ban jayegnge aur lst bhi same logic se build hoga 

	root->right=treeinsortedarray(a,m+1,e);//aur badd walle rst
	return root;//tree ko return karadiya

}

int main() {
	

	node* root = NULL;
	int a[]={1,2,3,4,5,6,7};
	int n=sizeof(a)/sizeof(int);


	//root = createTree();

	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
	printInRange(root, 3, 10);
	cout << endl;
	root=treeinsortedarray(a,0,n-1);
	// Pair p=checkheightbalance(root);
	// if(p.isbalanced){
	// 	cout<<"balanced hai\n";
	// }
	// else{
	// 	cout<<"balanced nhi hai\n";
	// }
	// if (isBST(root)) {
	// 	cout << "BST Hai\n";
	// }
	// else {
	// 	cout << "BST Nahi Hai\n";
	// }
	//  // linklist l = bsttoll(root);

	// // printLL(l.head);


	// levelOrderPrint(root);


	return 0;
}
