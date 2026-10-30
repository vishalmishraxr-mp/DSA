#include<iostream>
using namespace std;

int find(vector<int> & parents, int x){
    return parents[x] = (parents[x]==x)? x : find(parents,parents[x]);
}
bool Union(vector<int>& parents, vector<int>& rank, int a, int b) {

    a = find(parents, a);
    b = find(parents, b);

    if (a == b) return true;

    if (rank[a] < rank[b]) {
        parents[a] = b;
    }
    else {
        parents[b] = a;
        if (rank[a] == rank[b]) {
            rank[a]++;
        }
    }
    return false;
}
int main(){ 
    int n,m;
    cin>>n>>m;
    vector<int> parents(n+1);
    vector<int> rank(n+1,0);
    for(int i=1;i<=n;i++){
         parents[i] = i;
    }
    while(m--){
           int x,y;
           cin>>x>>y;
           bool flag =  Union(parents,rank,x,y);
           if(flag) cout<<"Cycle detected between: "<<x<<"-->"<<y<<"\n";
        }
return 0;
}