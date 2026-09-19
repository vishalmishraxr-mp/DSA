#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
using namespace std;

// all path from source to destination
vector< list<int> >graph;
unordered_set<int> vis;
vector<vector<int>> result;
    int v;
    void add_edge(int src, int dest, bool dir_graph=true){
        graph[src].push_back(dest);
        if(dir_graph) graph[dest].push_back(src); 
    }
    void BFS(int src, int dest, vector<int> &dist){
        queue<int> q;
        vis.clear();
        dist.resize(v,INT_MAX);
        dist[src] = 0;
        vis.insert(src); 
        q.push(src);
            while(!q.empty()){
                int curr = q.front();
                q.pop();
                for(auto nbr : graph[curr]){
                    if(!vis.count(nbr)){
                        q.push(nbr);
                        vis.insert(nbr);
                        dist[nbr] = dist[curr] + 1;
                    }
                }
 
            }
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
    vector<int> dist;
    BFS(x,y,dist);
    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }
    cout<<"\n";
return 0;
}