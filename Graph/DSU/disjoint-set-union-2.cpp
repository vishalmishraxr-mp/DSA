#include<iostream>
using namespace std;

int find(vector<int> & parents, int x){
    // this indicate that in which cluster or group the element belong
    return parents[x] = (parents[x]==x)? x : find(parents,parents[x]);
}
void Union(vector<int>& parents, vector<int>& sz,
           vector<int>& mx, vector<int>& mn,
           vector<int>& rank, int a, int b) {

    a = find(parents, a);
    b = find(parents, b);

    if (a == b) return;

    if (rank[a] < rank[b]) {
        parents[a] = b;

        sz[b] += sz[a];
        mx[b] = max(mx[a], mx[b]);
        mn[b] = min(mn[a], mn[b]);
    }
    else {
        parents[b] = a;

        sz[a] += sz[b];
        mx[a] = max(mx[a], mx[b]);
        mn[a] = min(mn[a], mn[b]);

        if (rank[a] == rank[b]) {
            rank[a]++;
        }
    }
}
int main(){ 
    // implementation of disjoint set union data structure
    int n,m;
    cin>>n>>m;
    vector<int> parents(n+1);
    vector<int> rank(n+1,0);
    vector<int> sz(n+1,1);
    vector<int> mx(n+1);
    vector<int> mn(n+1);
    for(int i=1;i<=n;i++){
         parents[i] = mn[i]= mx[i] = i;
    }
    while(m--){
        string str;
        cin>>str;
        if(str=="union"){
            int x,y;
            cin>>x>>y;
            Union(parents,sz,mx,mn,rank,x,y);
        }
        else{
            int x;
            cin>>x;
            int root = find(parents,x);
            cout<<mn[root]<<" "<<mx[root]<<" "<<sz[root]<<"\n";
        }
    }
return 0;
}
// Time Complexity --> O(log *n)  * --> val ko 1 banane tk log lete rho 