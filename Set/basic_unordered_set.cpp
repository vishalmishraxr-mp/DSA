#include<iostream>
#include<unordered_set>
using namespace std;

int main(){ 
    unordered_set<int> s;
    // random order me insert hoti hai value
    s.insert(4);
    s.insert(2);
    s.insert(7);
    s.insert(9);

    // sirf unique value store krta hai koi value 1 se jayada bar insert nhi hogi
    s.insert(2);

    // delete ke liye erase use hota hai
    s.erase(9);
    // for each loop 
    for(int ele : s){
       cout<<ele<<" ";
    }
    cout<<endl;

    // find that target exist or not

    // ye target kopcsearch krta hai or agar target nhi milta
    //  to end value ko return kr deta h ---> if end value return
    //  ho rhi hai matlab not exist so thats why this cindition is written 
    int target = 14;
    if(s.find(target)!=s.end()){     // target exist
      cout<<"target exist"<<endl;
    }
    if(s.find(target)==s.end()){     // target not exist
      cout<<"target not exist"<<endl;
    }

    // kisi element ko check krna ki hai ya nhi 
    if(s.count(4)){
        cout<<s.count(4)<<endl;
    }
    else cout<<"not present"<<endl;

return 0;
}