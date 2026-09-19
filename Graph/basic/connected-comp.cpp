#include <iostream>
#include <vector>
#include <list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
int v;
void add_edge(int src, int dest, bool dir_graph = true)
{
    graph[src].push_back(dest);
    if (dir_graph)
        graph[dest].push_back(src);
}
void DFS(int node, unordered_set<int> &vis){
    vis.insert(node);
    for(auto nbr : graph[node]){
        if(!vis.count(nbr)){
            DFS(nbr,vis);
        }
    }
}
int connected_comp(){
    int result = 0;
    unordered_set<int> vis;
    for(int i=0;i<v;i++){  // go to the every vertices
        if(vis.count(i)==0){
            result++;
            DFS(i,vis);
        }
    }
    return result;
}
int main(){
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cin >> e;
    while (e--){
        int s, d;
        cin >> s >> d;
        add_edge(s, d);
    }
    cout<<connected_comp()<<"\n";
    return 0;
}