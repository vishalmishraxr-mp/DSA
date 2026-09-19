#include<iostream>
#include<vector>
#include<list>
using namespace std;

// implement the weighted graph through adjacency map 
vector< unordered_map<int,int> >graph;
    int v;
    void add_edge(int src, int dest,int wt, bool dir_graph=true){
        graph[src][dest] = wt;
        if(dir_graph) graph[dest][src] = wt;   // if Bi-directional 
    }
    void display(){
        for(int i=0;i<graph.size();i++){
            cout<<i<<"--> ";
            for(auto el : graph[i]){
                cout<<"("<<el.first<<" "<<el.second<<"),"<<"  ";
            }
            cout<<"\n";
        }
    }
int main(){ 
    cin>>v;
    graph.resize(v, unordered_map<int,int> ());
    int e;
    cin>>e;
    while(e--){
        int s,d,wt;
        cin>>s>>d>>wt;
        add_edge(s,d,wt);
    }
    display();
return 0;
}