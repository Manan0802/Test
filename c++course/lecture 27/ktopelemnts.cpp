#include<iostream>
#include<queue>
#include<functional>
using namespace std;
void printheap(priority_queue<int,vector<int>,greater<int>>q){// que pass kari hai 
//que print basiclly heap 
     while(!q.empty()){
        cout<<q.top()<<endl;
        q.pop();

    }
     
}
int main(){
    priority_queue<int,vector<int>,greater<int>>q;
    int cs=0,k=3;
    int data;
    while(1){//chalta rahaegaa kyu ki infiite memory 
        cin>>data;//humne elemnts da
        if(data==-1){
            //print karo heap ko
            printheap(q);
        }
        else{
            if(cs==k){//cureent size aaray ka compare kara top k elements se 
                if(data>q.top()){//data ko rrot node se compare 
                    q.pop();
                    q.push(data);

                }
            }
            else{
                q.push(data);
                cs++;
            }
        }
    }
}