// #include<iostream>
// #include<vector>
// #include<list>
// using namespace std;

// // implement the unweighted graph through adjacency list 
// vector< list<int> >graph;
//     int v;
//     void add_edge(int src, int dest, bool dir_graph=true){
//         graph[src].push_back(dest);
//         if(dir_graph) graph[dest].push_back(src);   // if Bi-directional 
//     }
//     void display(){
//         for(int i=0;i<graph.size();i++){
//             cout<<i<<"--> ";
//             for(auto el : graph[i]){
//                 cout<<el<<" ";
//             }
//             cout<<"\n";
//         }
//     }
// int main(){ 
//     cin>>v;
//     graph.resize(v, list<int> ());
//     int e;
//     cin>>e;
//     while(e--){
//         int s,d;
//         cin>>s>>d;
//         add_edge(s,d);
//     }
//     display();
// return 0;
// }


#include<iostream>
#include<vector>
#include<list>
using namespace std;

// implement the weighted graph through adjacency list 
vector< list<pair<int,int>> >graph;
    int v;
    void add_edge(int src, int dest,int wt, bool dir_graph=true){
        graph[src].push_back({dest,wt});
        if(dir_graph) graph[dest].push_back({src,wt});   // if Bi-directional 
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
    graph.resize(v, list<pair<int,int>> ());
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