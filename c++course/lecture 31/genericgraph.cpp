// #include<iostream>
// #include<map>
// #include<queue>
// #include<list>

// using namespace std;
// class graph{
//     public:
//     unordered_map<string,list<string>>l;//hashmap banaya jisme key ek srting aur ek value jo hai ll of stirng 
//     void addedge(string u,string v,bool bidir=false){
//         l[u].push_back(v);
//         if(bidir){//by default bidirectional na hoo 
//             l[v].push_back(u);
//         }

//     }
//     void print(){// same code 
//         for(auto node:l){//forauto every node belonging to l
//             cout<<node.first<<"->";
//             for(auto neighbour: node.second){
//                 cout<<neighbour<<" ";
//             }
//             cout<<endl;
//         }
//     }
//         void bfs(T src){
//             queue<T> q;
//             q.push(src);
//             visited[src]=true;
//             while (!q.empty()){
//                 auto node=q.front();
//                 q.pop();
//                 cout<<node<<" ";
//                 for(auto neighbour : l[node]){
//                     if(!visited[neighbour]){
//                         q.push(neighbour);
//                         visited[neighbour] = true;
//                     }
//                 }
//             }
//             cout<<endl;
            
            
//         }
//         void sssp(T src){

//             queue<T> q;
//             q.push(src);
//             visited[src]=true;
//             while (!q.empty()){
//                 auto node=q.front();
//                 q.pop();
//                 cout<<node<<" ";
//                 for(auto neighbour : l[node]){
//                     if(!visited[neighbour]){
//                         q.push(neighbour);
//                         visited[neighbour] = true;
//                         parent[neighbour]=node;
//                         distance[neighbour]=distance[node]+1;
//                     }
//                 }
//             }
//             for(auto node: distance){
//                 cout<<"distance of"<<node.first<<"from"<<src<<":"<<node.second<<endl;
//             }
//         }


        
    
// };
// int main(){
//     graph <int>g;
//     g.addedge(1,0);
//     g.addedge(1,2);
//     g.addedge(4,2);
//     g.addedge(3,0);
//     g.addedge(3,2);
//     g.addedge(3,4);
//     g.addedge(4,5);
//     //g.print();
//     g.bfs(0);
//     g.sssp(0);
//     return 0;

// }
//////////////////// generic graph(any value)/////////////////////////
#include <iostream>
#include <unordered_map>//hashmap ka stl
#include <map>
#include <list>
#include<queue>
using namespace std;

template<typename  T>
class Graph {
public:
	unordered_map<T, list<T> > adj;

	void addEdge(T u, T v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir)
			adj[v].push_back(u);
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << "-->";
			for (auto neighbours : p.second) {
				cout << neighbours << " ";
			}
			cout << endl;
		}
	}
	void DFS_Helper(int src , unordered_map<int,bool>&visited)//source liyaa anur visited wala hashmap 
    {
        cout<<src<<" ";//source ko print source ka kam humne bakki ka recursion ne 
        visited[src]=true;//source ka visited ko true 
        for (auto ch :adj[src]){ //abb humne child pe gaye for each loop se sarre child pe jaynege 
            if(!visited[ch]) DFS_Helper(ch,visited);//agar visited nhi hai toh buss recursion kko bol diya tu karde 
        }
    }
	//map bar bar main mai na baane padde isliye helper se is tarkke se 
	void DFS(int src )
    {
        unordered_map<int,bool>visited;
        int totalcomponents=1;
        DFS_Helper(src,visited);//humko yeh visited ka map bar bar main main mai na baana padde isliyyee hum iska help legaa jo kam dfs hi kar rha ahaai 
        
		
		//when we have a parth of graph which is not joined from the other part
        for(auto p: adj)
        {
            if(!visited[p.first])//basicaly ab hum dusre walle graph pe check kar rhae hai jo connnected nhi hai p.first se 
            {
                DFS_Helper(p.first , visited );
                totalcomponents++;//yeh basicaly total no of graphs hai jo hai 
            }
        }
        cout<<"\nTotal components => "<<totalcomponents<<endl;//is graphs ka no milega 
    }

	void bfs(T src, T des) {
		unordered_map<T, T> parent;
		unordered_map<T, bool> visited;
		unordered_map<T, int> distance;

		queue<T> q;

		visited[src] = true;
		q.push(src);
		parent[src] = src;
		distance[src] = 0;

		while (!q.empty()) {
			T f = q.front();
			q.pop();

			// cout << f << " ";

			for (auto ch : adj[f]) {
				if (!visited[ch]) {
					q.push(ch);
					visited[ch] = true;
					parent[ch] = f;
					distance[ch] = distance[f] + 1;
				}
			}
		}

		// cout << endl;
		// for (auto p : distance) {
		// 	cout << "Distance of " << p.first << " from " << src << " : " << p.second << endl;
		// }
		int minMoves = distance[des];
		while (des != parent[des]) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << des << endl;
		cout << minMoves << endl;
	}
};

int main() {

	Graph<int> g;
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	for (int u = 0; u <= 36; ++u)
	{
		for (int dice = 1; dice <= 6; ++dice)
		{
			int v = u + dice + board[u + dice];
			g.addEdge(u, v, false);
		}
	}

	// g.addEdge(0, 1);
	// g.addEdge(3, 1);
	// g.addEdge(3, 2);
	// g.addEdge(4, 2);
	// g.addEdge(4, 3);
	// g.addEdge(4, 5);
	// g.addEdge(0, 2);

	// g.print();
	g.bfs(0, 36);

	return 0;
}
