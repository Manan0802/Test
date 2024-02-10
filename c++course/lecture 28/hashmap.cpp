#include<iostream>
using namespace std;
class node{
    public:
    string key;//name object ka
    int val;//uski value
    node* next;//next node ka address
    node(string s,int k){
        key=s;
        val=k;
        next=NULL;//next ko null he point karwyaa
    }

};
class hashmap{
    node** a;//array banaya jisme node* ko save karenge 
    int cs;//current size 
    int ts;//table size
    //hashfunction aur rehasing private rahnege kyu ki har koi na call karle
    int hashfunction(string key){//yeh value return karega jo index ke correponding hogi 
        int ans=0;//asci code se ek ek digit ko se divide aur wahi multiply 
        int mul=1;
        for(int i=0;i<key.size();++i){
            ans+=(key[i]%ts)*(mul%ts);
            ans %= ts;
            mul *=7;
            mul %=ts;
        }
        return ans%ts;//function return 
    }
    void rehashing(){
        node** olda=a;//yeh new hashtable banni
        int oldts=ts;//purana table size 
        a=new node*[2*ts];//new table banna uski double size ki 
        ts*=2;//ts double 
        cs=0;
        for(int i=0;i<ts;i++){
            a[i]=NULL;//sabmai null 
        }
        //purani array ko nayi mai dalna 
        for(int i=0;i<oldts;++i){
            node* head=olda[i];//yeh humne ek loop lagaya jo purane elements ke pe  ja rha hai  
            while(head){
                insert(head->key,head->val);//yeh humne insert kardia jiske head  aur value mang rha hai 
                head=head->next;//link lisr pe iterate karlia 
            }
        }
        delete[]olda;//purani array ko dlete kyu ki koo kam ki nnhi 
        olda=NULL;
    }
    public:
    hashmap(int s=7){//by default humne agar user ne specify nhi kra 7 lelia 
        cs=0;//no elments abhi tak
        ts=s;//table size
        a=new node*[ts];//hash table wala aaray banalia 
        for(int i=0;i<ts;++i){
            a[i]=NULL;

        }
    }
    void insert(string key,int val){
        int i=hashfunction(key);//sabse pahle index dhunda insert karne ke liye 
        node* x=new node(key,val);//fir humne new node banayi 
        x->next=a[i];//sabse pahle humne node ko jo  existing node hai usse connect kiya 
        a[i]=x;//phir humne jo aaray wala indx hai uuse apni node ko connect  kara 
        cs++;//toh isse humara elemnt insert hogyaa aur abb size ko aage bada diya 
        float loadfactor=cs/(ts*1.0);
        if(loadfactor>0.6){//loadfactor agar 0.6 se baada toh reshaing  kardenge jisse ts bad jayega 
            rehashing();
            //agar phalle se node hai ya null bhi hai yeh dono caase ke take care  kar raha hai 
              
        }
    }
    void print() {//print ke liye bhi same karenge insert ki jgaha print mane old  ki  jagah new hi to aajyega 
		for (int i = 0; i < ts; ++i)
		{
			node* head = a[i];//humen point karaya head ko 
			cout << i << "-->";//yeh humne hash index ki value dekhni ke liye 
			while (head) {
				cout << "(" << head->key << "," << head->val << ") ";//yeh data ki printing kara li
				head = head->next;
			}
			cout << endl;
		}
	}
    node* search(string &key){//searching of a kkey 
        int i=hashfunction(key);//sabse phle hashindex nikalnege 
        node* head=a[i];//head ko usko iniatlize kardia 
        while(head){
            if(head->key == key) return head;//bhyi aagr data match hogya toh mtln key found 
            head=head->next;//head ko aage badda dia jab tak nhi milaa 
        }
        return NULL;//ke nhi milaa
    }
    int& operator[](string key){//operator basicaly updation ya koi particular work karne ke liye
        //toh abb do cases honge ya toh key hogi uya nhi hogi kam humne toh dono mai karna hai 
        
        node* ans=search(key);//pahel pata lagaya ke key hai ke nhi 
        if(ans){//ans hai mtlb key null nhi hai 
            //key present hai value updtae
            return ans->val; 
        }
    
    else{
        //key present nhi hai
        int rv;
        insert(key,rv);//humne usko usme daldiyaa
        ans=search(key);
        return ans->val;//ab uski value returneed 
    }
    }
    //nhi hai toh insert tha to updatew 
};
int main() {

	hashmap h;

	h.insert("Mango", 100);
	h.insert("Apple", 120);
	h.insert("kiwi", 50);
	h.insert("Pineapple", 140);
	h.insert("banana", 60);
	h.insert("Orange", 160);
	h.insert("Anaar", 110);
	h.insert("Grapes", 30);
	h.insert("Aadu", 300);
    h["orange"]=160;
    h["annar"]=110;
    cout<<h["orange"]<<endl;

	h.print();



	return 0;
}
    