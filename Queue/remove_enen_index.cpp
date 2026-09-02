#include<iostream>
#include<queue>
using namespace std;

queue<int> remove_even_index(queue<int> &q){
    int n = q.size();
    for(int i=0;i<n;i++){
        int x = q.front();
        q.pop();
        if(i%2!=0){
            q.push(x);
        }
    }
    return q;
}
void display(queue<int> &q){
    if(q.size()==0){
        cout<<"q is empty"<<endl;
    }
    for(int i=1;i<=q.size();i++){
        int x = q.front();
        q.pop();
        q.push(x);
        cout<<x<<" ";
    }
    cout<<"\n";
}
int main(){ 
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);   // 10  20  30  40
    display(q);
    remove_even_index(q);     // 20  40
    display(q);
    
return 0;
}