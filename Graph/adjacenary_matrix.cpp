// #include<iostream>
// using namespace std;

// int main(){ 
//     int n,m;
//      cin>>n>>m;

//      // strore graph value in the 2D array 
//      int adj[n+1][m+1];  // 1 based indexing so n+1 and m+1
//      for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u][v]==1;
//         adj[v][u]==1;
//      }
// return 0;
// }



#include<iostream>
using namespace std;

int main(){ 
    int n,m;
     cin>>n>>m;

     // strore graph value in the List 
     vector<vector<int>> adj(m+1);  // 1 based indexing so n+1 and m+1
     for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
     }
return 0;
}