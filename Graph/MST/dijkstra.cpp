// find the shortest path between source and destionation in term of the edge weight

#include<iostream>
#include<unordered_map>
#include<queue>
#include<list> 
#include<unordered_set>
using namespace std;
#define ll long long int
vector<list<pair<int, int>>> graph;
void add_edge(int u, int v, int wt, bool bi_dir = true){
    graph[u].push_back({v,wt});
    if(bi_dir) graph[v].push_back({u,wt}); 
}
unordered_map<int,int>  dijkstra(int src, int n){
    priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>> > pq;
    // {wt,node}
    unordered_set<int> vis;
    vector<int> via(n);
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++){
        mp[i] = INT_MAX;
    }
    pq.push({0,src});
    mp[src] = 0;
    while(!pq.empty()){
        pair<int, int> curr = pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        } 
        vis.insert(curr.second);
        pq.pop();

        for(auto nbr : graph[curr.second]){
            if(!vis.count(nbr.first) && mp[nbr.first] > mp[curr.second] + nbr.second){
                pq.push({mp[curr.second] + nbr.second,nbr.first}); 
                via[nbr.first] = curr.second;
                mp[nbr.first] = mp[curr.second] + nbr.second;
            }
        }
    }
    return mp;
}
int main(){ 
    int n,m;
    cin>>n>>m;
    graph.resize(n, list<pair<int,int>> ());
    while(m--){
        int u,v,wt;
        cin>>u>>v>>wt;
        add_edge(u,v,wt);
    }
    int src;
    cin>>src; 
    unordered_map<int,int> short_path = dijkstra(src,n);
    int dest;
    cin>>dest;
    cout<<short_path[dest]<<"\n";
    
return 0;
}