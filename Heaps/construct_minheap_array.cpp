#include<iostream>
using namespace std;

class MinHeap{
    public:
    int arr[50];
    int idx = 1;
    int top(){
        return arr[1];
    }
    void push(int val){
        arr[idx] = val;
        int i = idx;
        idx++;
        // swapping till root node 
        while(i!=1){
            if(arr[i]<arr[i/2]){
                int temp = arr[i];
                arr[i] = arr[i/2];
                arr[i/2] = temp;
            }
            else break;
            i = i/2;
        }
    }
    void pop(){
        idx--;
        arr[1] = arr[idx];

        // rearrangment
        int i = 1;
        while(1){
            int l = 2*i, r = 2*i +1;
            if(l>idx-1) break;
            if(r>idx-1){
                if(arr[i]>arr[l]){
                    swap(arr[i],arr[l]);
                    i = l;
                }
                else break;
            }
            if(arr[l]<arr[r]) {
                if(arr[i]>arr[l]){
                    swap(arr[i],arr[l]);
                    i = l;
                }
                break;
            }
            if(arr[l]>arr[r]) {
                if(arr[i]>arr[r]){
                    swap(arr[i],arr[r]);
                    i = r;
                }
                break;
            }
        }
    }
};
int main(){ 
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    cout<<pq.top()<<endl;
    pq.push(40);
    pq.push(2);
    pq.pop();
    pq.push(4);
    cout<<pq.top()<<endl;
return 0;
}