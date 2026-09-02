#include<iostream>
using namespace std;

class Queue{
    public:
    int f;
    int r;
    int arr[5];
    Queue(){
        f = 0;
        r = 0;
    }
    int push(int val){
        if(r==5){
           cout<<"queue is full"<<endl;
        }
        arr[r++] = val;
    }
    void pop(){
        if(f==r) cout<<"queue is empty"<<endl;
        f++;
    }
    int display(){
        for(int i=f;i<r;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
};
int main(){ 
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);   // 10  20  30  40
    q.push(50); 
    q.push(60);  // now the overflow condition hit
    q.display();
    q.pop();      // 20  30  40
    q.display();
return 0;
}