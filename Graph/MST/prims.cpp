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
ll prims(int src, int n){
    priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>> > pq;
    // {wt,node}
    unordered_set<int> vis;
    vector<int> par(n+1 );
    unordered_map<int, int> mp;
    for(int i=0;i<=n;i++){
        mp[i] = INT_MAX;
    }
    pq.push({0,src});
    mp[src] = 0;
    ll result = 0; // egde wt add krte chalenege
    int total_ed = 0;  // total edges go from 0 --> n-1;
    while(total_ed<n && !pq.empty()){
        pair<int, int> curr = pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        } 
        vis.insert(curr.second);
        total_ed++;
        result += curr.first;
        pq.pop();

        for(auto nbr : graph[curr.second]){
            if(!vis.count(nbr.first) && mp[nbr.first] > nbr.second){
                pq.push({nbr.second,nbr.first}); 
                par[nbr.first] = curr.second;
                mp[nbr.first] = nbr.second;
            }
        }
    }
    return result;
}
int main(){ 
    int n,m;
    cin>>n>>m;  // vertices , egdes
    graph.resize(n+1, list<pair<int,int>> ());
    while(m--){
        int u,v,wt;
        cin>>u>>v>>wt;
        add_edge(u,v,wt);
    }
    int src;
    cin>>src;

    cout<<prims(src,n)<<"\n";
    
return 0;
}