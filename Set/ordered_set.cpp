#include<iostream>
#include<set>
#include<map>
using namespace std;


// value order wise appear hogi jo choti pahle jo badi vo baad me
int main(){ 
    // set<int> s;
    // s.insert(5);
    // s.insert(12);
    // s.insert(9);
    // s.insert(7);
    // for(int ele : s){
    //     cout<<ele<<" ";
    // }


    // arrange ho jayega first value(key value) ke according  m[key] = value
    map<string,int> m;
    m["c"] = 3;
    m["d"] = 1;
    m["a"] = 4;
    m["b"] = 2;
    for(auto ele : m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
return 0;
}