#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

// check there is any path from source to destination

vector< list<int> >graph;
unordered_set<int> vis;
    int v;
    void add_edge(int src, int dest, bool dir_graph=true){
        graph[src].push_back(dest);
        if(dir_graph) graph[dest].push_back(src);   // if Bi-directional 
    }
bool DFS(int curr , int end){
    vis.insert(curr);
    for(auto nbr : graph[curr]){
        if(curr == end) return true;
        if(!vis.count(nbr)){
            bool result = DFS(nbr,end);
            if(result) return true;
        }
    }
    return false;
}
    bool any_path(int src, int dest){
        return DFS(src,dest);
    }

int main(){ 
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    vis.clear();
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    int x,y;
    cin>>x>>y;
    cout<<any_path(x,y)<<"\n";
return 0;
}