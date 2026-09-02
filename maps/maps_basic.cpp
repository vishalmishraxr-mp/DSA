#include<iostream>
#include<unordered_map>
using namespace std;

int main(){ 
    // map is a pair class it has two value 
     unordered_map<string,int> m;

    //  // value insert 
    //  pair<string,int> p1;
    //  p1.first = "vishal mishra";
    //  p1.second = 250101163;
    //  m.insert(p1);

    //  pair<string,int> p2;
    //  p2.first = "saurabh tiwari";
    //  p2.second = 250101152;
    //  m.insert(p2);

    //  pair<string,int> p3;
    //  p3.first = "sumit shukla";
    //  p3.second = 250101155;
    //  m.insert(p3);

    // //  // print 
    //  for(pair<string,int> p : m){
    //     cout<<p.first<<" -> "<<p.second<<endl;
    //  }


    // different method to insert the value
    m["vishal mishra"] = 3;
    m["sumit shukla"] = 4;
    m["saurabh tiwari"] = 5;
 
    // print
    for(pair<string,int> p : m){
        cout<<p.first<<" -> "<<p.second<<endl;
     }

     // remove krne kw liye
     m.erase("vishal mishra");
     
     for(pair<string,int> p : m){
        cout<<p.first<<" -> "<<p.second<<endl;
     }
return 0;
}