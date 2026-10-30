#include<iostream>
#include<list>
#include<unordered_set>
#include<vector>
using namespace std;

vector<list<int> > graph;
int v;  // no of the vertices
void add_edge(int a,int b, bool bi_dir = true){
    graph[a].push_back(b);
    if(bi_dir) graph[b].push_back(a);
}
int topo_sort_bfs(){  // Topological sorting  kahn's algprithms
    vector<int> indegr(v,0);
    for(int i=0;i<v;i++){
        for(auto nbr : graph[i]){
            indegr[nbr]++;
        }
    }
    queue<int> q;
    unordered_set<int> vis;
    for(int i=0;i<v;i++){
        if(indegr[i]==0) {
            q.push(i);
            vis.insert(i);
        }
    }
    int count = 0;
    while(!q.empty()){
        int curr = q.front();
        cout<<curr<<" "; 
        count++;
        q.pop();
        for(auto nbr : graph[curr]){
            if(!vis.count(nbr)) {
                indegr[nbr]--;
                if(indegr[nbr]==0) {
                    q.push(nbr);
                    vis.insert(nbr);
                }
            }
        }
    }
    return count;
}
int main(){ 
    cin>>v;
    int e;
    cin>>e;
    graph.resize(v, list<int> ());
    while(e--){
        int x,y;
        cin>>x>>y;
        add_edge(x,y,false);
    }
    int ans = topo_sort_bfs();
    if(ans==v) cout<<"This is a DAG (direct acyclic graph)"<<"\n";
    else cout<<"This is a not DAG (direct acyclic graph)"<<"\n";
return 0;
}