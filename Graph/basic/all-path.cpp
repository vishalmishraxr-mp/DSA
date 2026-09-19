#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
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
    void display(){
        for(int i=0;i<graph.size();i++){
            cout<<i<<"--> ";
            for(auto el : graph[i]){
                cout<<el<<" ";
            }
            cout<<"\n";
        }
    }
void DFS(int curr , int end, vector<int> &path){
        if(curr == end) {
            path.push_back(curr);
            result.push_back(path);
            path.pop_back();
            return;
        }
        vis.insert(curr);
        path.push_back(curr);
        for(auto nbr : graph[curr]){
        if(!vis.count(nbr)){
            DFS(nbr,end,path);
        }
    }
    path.pop_back();
    vis.erase(curr);
    return;
}
    void all_path(int src, int dest){
        vector<int> arr;
        DFS(src,dest, arr);
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
    all_path(x,y);
    for(auto path : result){
        for(auto el : path){
            cout<<el<<" ";
        }
        cout<<"\n";
    }
return 0;
}