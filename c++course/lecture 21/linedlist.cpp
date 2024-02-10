#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node *next;

	node(int d)
	{
		data = d;
		next = NULL;
	}
};
int lenghthll(node *head)
{
	int cnt = 0;
	while (head != NULL)
	{

		// cout << p->data << "-->";

		cnt++;
		head = head->next;
	}
	return cnt;
}

// INSERTION
void insertAtFront(node *&head, node *&tail, int data)
{
	// !head is similar to head==null
	if (head == NULL)
	{
		head = tail = new node(data); // 1st ek lauti node bani uskki pointing
	}
	else
	{
		node *n = new node(data); // add karne ke liye nayi node banai
		n->next = head;			  // yeh humne addres ki pointing change kari head ki
		head = n;				  // aur yeh humne head hi shift marra shuru mai
	}
}
void insertAtEnd(node *&head, node *&tail, int data)
{
	if (!head)
	{
		head = tail = new node(data);
	}
	else
	{
		node *n = new node(data);
		tail->next = n;
		tail = n;
	}
}
void insertatmiddle(node *&head, node *&tail, int data, int pos)
{
	if (pos == 0)
	{
		insertAtFront(head, tail, data); // head pe insrt karne wala hogaya
	}
	else if (pos >= lenghthll(head))
	{
		insertAtEnd(head, tail, data); // tail ppe insert karne wala hogaya
	}
	else
	{
		node *temp = head; // humne ek temp banaya jo hume position tak leke jayega usse ek phale
		for (int i = 1; i < pos; i++)
		{
			temp = temp->next;
		}
		node *n = new node(data); // yeh humne node banali
		n->next = temp->next;	  // yeh humne postion walli se phale connection karwaya
		temp->next = n;			  // yeh humne pichli walli se connect karliaa
	}
}

void printLL(node *p)
{

	while (p != NULL)
	{
		cout << p->data << "-->";
		p = p->next;
	}
	cout << "NULL\n";
}
////////////////////////////////////// deletiion in ll ////////////////////////////////////////
void deleteatfront(node *&head, node *&tail)
{
	if (!head)
	{ // ll exist hi nhi karti
		return;
	}
	else if (head->next == NULL)
	{ // sirf ek node hai isliye seedha head delte
		delete head;
		head = tail = NULL;
	}
	else
	{
		node *temp = head; // temp  bucket mai store karaliya humnee taki memeory leak na hoo
		head = head->next; // head ko shift kara aage
		delete temp;	   // fir aab  delete
	}
}
void deleteatend(node *&head, node *&tail)
{
	if (!head)
	{
		return;
	}
	else if (head->next == NULL)
	{
		delete head;
		head = tail = NULL;
	}
	else
	{
		node *temp = head; // isme humne sabse pahle tail se ek phale walle mai pjauchna padgea takki hum delete kar skae
		while (temp->next != tail)
		{
			temp = temp->next;
		}
		delete tail;	   // delete kardia toh abb tail garabage pe point kar rahi hai
		temp->next = NULL; // phale null pe point karwyaa
		tail = temp;	   // tail ki shifting kari
	}
}
void deleteatmiddle(node *&head, node *&tail, int pos)
{
	if (pos == 0)
	{
		deleteatfront(head, tail);
	}
	else if (pos >= lenghthll(head) - 1)
	{
		deleteatend(head, tail);
	}
	else
	{
		node *temp = head;
		for (int i = 1; i < pos; i++)
		{
			temp = temp->next; // ek position pahle pe phauche jo delete karni hai jaise insertion mai tha
		}
		node *n = temp->next; // sabse phale n bucket mai store kara humne jo delete karni hai
		temp->next = n->next; // yeh humne arrow conneection ko break kardiaa aur next se connect kardia
		delete n;			  // fir delete
	}
}
///////////////////////////////   delete in ll ///////////////////////////////////////////////////////

///////////////////////////////// searching in ll //////////////////////////////////////////////////
void searchll(node *head, int key)
{
	node *t = head;
	while (t != NULL)
	{
		if (t->data == key)
		{
			cout << "key found";
			/* code */
		}
		else
		{
			t = t->next;
		}
	}
	cout << "key not found\n";
}

void searchllrec(node *head, int key)
{
	// base case
	if (head == NULL)
	{
		cout << "key not found";
	}
	// recursive rln
	if (head->data == key)
	{ // ek humne deklia head ka bakki recursion
		cout << "found\n";
	}
	else
	{
		searchllrec(head->next, key);
	}
}
////////////////////////////////// searchin ll //////////////////////////////////////////////////

////////////////////////////////// reverse a ll //////////////////////////////////////////////////////

// void reversell(node* &head,node* &tail){
// 	node*p=NULL,*c=head; //p is previous jo null ko point karega  and c is cueent jo head
// 	while(c){  kam jab tak kara jab  tak head current null nhi
// 		node*n=c->next; //yeh n humne store karlia takki ll ka acces na tute
// 		c->next=p; //yeh arrow ki driection badlegaa
// 		p=c; previous ko ek aage
// 		c=n; cureent ko ek agge ll reversed
// 	}
// 	swap(head,tail); head tail aapas mai chanfe
// }
void reversellrechelper(node *c, node *p)
{
	if (c == NULL)
	{
		return;
	}
	// recursive case
	node *n = c->next;
	c->next = p;
	reversellrechelper(n, c);
}

void reversellrec(node *&head, node *&tail)
{
	reversellrechelper(head, NULL);
	swap(head, tail);
}
////////////////////////////////// reverse a ll //////////////////////////////////////////////////////

//////////////////////////////// middle of ll ///////////////////////////////////////////////////
node *midll(node *head)
{ // node* because hume puri ki puri node returun karwayengee
	if (!head or !head->next)
	{ // ll exit nhi kar rahi ya fir khali ek hi node hai
		return head;
	}
	node *slow = head, *fast = head->next; // fast walle ko ek step ki lead dedi
	while (fast and fast->next)
	{							 // jab tak fast pe na phauche ya null se ek pahle pe  tab taak chalo code ko
		fast = fast->next->next; // 2 steps ki jump li
		slow = slow->next;		 // slow ko ek chalaya
	}
	return slow; // YEH MID BATA DIA BINA LENGTH KE JANNE
}
//////////////////////////////// merge ll /////////////////////////////////////////////////////
node *mergeLL(node *a, node *b)
{
	if (!a)
	{
		return b; // ek ll hai dusri null
	}
	if (!b)
	{
		return a;
	}

	node *nH = NULL;
	if (a->data > b->data)
	{
		nH = b;							// jo chota hai waha se shur hogaa iskiye usko naya head bana dia
		nH->next = mergeLL(a, b->next); // mergell recursively bakki ll ko sort mardegi aur humne usko nh se jod diyaa toh wo ek puri ban gayi
	}
	else
	{
		nH = a;
		nH->next = mergeLL(a->next, b);
	}
	return nH;
}
///////////////////////////////// merge sort ////////////////////////////////////////////////////
node *mergesortll(node *head)
{
	// base case
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	// recursive case
	// 1 divide
	node *mid = midll(head);
	node *a = head;
	node *b = mid->next;
	mid->next = NULL; // break point
	// 2 sort
	a = mergesortll(a);
	b = mergesortll(b);
	// 3 3.merge karado sorted listss
	return mergeLL(a, b);
}
///////////////////// bubble sort /////////////////////////////////////////////////
void bubblesort(node *&head)
{
	int lenll = lenghthll(head);
	for (int i = 0; i < lenll - 1; i++)
	{ // HUME PTA HAI KE BUUBLE SORT N-1 BARR CHLTA HAI
		node *c = head;
		node *p = NULL;
		while (c != NULL and c->next != NULL)
		{
			// swaping hogi
			node *n = c->next;
			if (c->data > n->data)
			{

				// CASE 1. head change hoga
				if (p == NULL)
				{
					c->next = n->next;
					n->next = c;
					p = head = n;
				}
				else
				{ // head change nhi hooga
					c->next = n->next;
					n->next = c;
					p->next = n;
					p = n;
				}
			}
			else
			{
				// swaping nhi hoogi
				p = c;
				c = n;
			}
		}
	}
}
////////////////////////////////// cycle detection /////////////////////////////////////////////
void createcycle(node *head, node *tail)
{
	node *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = head->next->next; // yeh humne Null se ek pahle walle ko tessre elemenr se jood diyaa
}
void breakcycle(node *f, node *head)
{
	node *s = head; // slow
	node *p = head; // previous jo fast ke peeche rahega
	while (p->next != f)
	{
		p = p->next; // yeh humne p ko uski pos pe phauchaya
	}
	while (f != s)
	{
		p = f;
		f = f->next; // yeh humne fast aur slow ko ek ek step aage badaya jab tak de dont meet
		s = s->next;
	}
	p->next = NULL; // jaoise ,il gaye previous pe null
}
bool iscyclic(node *head)
{
	node *s = head, *f = head; // s hogya slow and f hogya fast
	while (f != NULL and f->next != NULL)
	{					   // condition check marra ke fast 2 steps le bhi sakta hai yes or no ki
		f = f->next->next; // 2 step leliye
		s = s->next;	   // 1 step lia
		if (f == s)
		{
			breakcycle(f, head); // cycle break karne ke liye
			return true;
		}
	}
	return false;
}

int main()
{

	node *head, *tail, *head1, *tail1;
	head = tail = NULL;
	head1 = tail1 = NULL;
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 9);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 10);
	insertAtEnd(head, tail, 12);
	insertAtEnd(head, tail, 80);
	insertAtEnd(head, tail, 90);
	insertAtEnd(head, tail, 25);

	printLL(head);
	createcycle(head, tail);
	if (iscyclic(head) == true)
	{
		cout << "cycle hai no print" << endl;
	}
	else
	{
		printLL(head);
	}
	// int d;
	// cin>>d;
	// printLL(head);

	// head=mergesortll(head);
	// printLL(head);
	// bubblesort(head);
	// printLL(head);
	// node* nH = mergeLL(head1, head);
	// printLL(nH);]
	// insertatmiddle(head,tail,8,3);
	// insertAtEnd(head1, tail1, 0);
	// insertAtEnd(head1, tail1, 2);
	// insertAtEnd(head1, tail1, 4);
	// insertAtEnd(head1, tail1, 6);
	// insertAtEnd(head1, tail1, 8);

	// deleteatmiddle(head,tail,2);
	// deleteatfront(head,tail);
	// deleteatend(head,tail);
	// reversell(head,tail);
	// printLL(head);
	// reversellrec(head,tail);
	// printLL(head);

	// cout<<lenghthll(head)<<endl;
	// node*mid=midll(head);
	// if(mid){
	// 	cout<<mid->data<<endl;
	// }

	// insertAtFront(head, tail, 1);
	// insertAtFront(head, tail, 2);
	// insertAtFront(head, tail, 3);
	// insertAtFront(head, tail, 4);
	// insertAtFront(head, tail, 5);

	printLL(head);

	return 0;
}
