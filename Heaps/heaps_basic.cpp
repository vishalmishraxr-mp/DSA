#include<iostream>
#include<queue>
using namespace std;

int main(){ 
    priority_queue<int> pq;  // in cpp stl its a maxheap 
    // min heap also exist but not in stl cpp
    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << pq.top()<<endl;  // 30
    pq.pop();
    cout << pq.top()<<endl;  // 20

    // now min heap;
    priority_queue<int , vector<int> , greater<int> > minpq;
    minpq.push(10);
    minpq.push(30);
    minpq.push(20);

    cout << minpq.top()<<endl;  // 30
    minpq.pop();
    cout << minpq.top()<<endl;  // 20

return 0;
}