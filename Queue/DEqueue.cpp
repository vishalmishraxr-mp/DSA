#include<iostream>
#include<deque>
using namespace std;

void display(deque<int> DEq){
    for(auto x : DEq){
        cout<<x<<" ";
    }
    cout<<"\n";
}
int main(){ 
    deque<int> DEq;
    DEq.push_front(6);
    DEq.push_front(2);
    DEq.push_front(9);
    DEq.push_back(7);
    DEq.push_back(61);
    DEq.push_front(36);
    DEq.push_back(76);
    display(DEq);
    DEq.pop_back();
    DEq.pop_front();
    display(DEq);
return 0;
}