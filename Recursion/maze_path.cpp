#include<iostream>
using namespace std;

int path(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    return path(sr+1,sc,er,ec) + path(sr,sc+1,er,ec);
}
int main(){ 
    cout<<path(1,1,4,4)<<endl;
return 0;
}
// set sr and sc a 1,1 then we can code only with 2 variable

// formula 2*(n-1)/C/n-1

// // path bhi print krna hai
// #include<iostream>
// using namespace std;

// void printpath(int sr, int sc, int er, int ec, string s){
//     if(sr>er || sc>ec) return;
//     if(sr==er && sc==ec) {
//         cout<<s<<endl;
//     }
//     printpath(sr,sc+1,er,ec,s+'R');  // right
//     printpath(sr+1,sc,er,ec,s+'D');  // down
// }
// int main(){ 
//     printpath(1,1,3,3,"");
// return 0;
// }