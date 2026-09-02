#include<iostream>
#include<vector>
using namespace std;

class Struct{
public:
    int val;
    Struct* next;
    Struct(int x){
        val = x;
        next = NULL;
    }
};

// print function
void printList(Struct* head){
    while(head != NULL){
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

Struct* mergeTwoLists(Struct* list1, Struct* list2) {
        Struct * ans = new Struct(-1);
        ans->next = NULL;
        Struct * tempC = ans;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){  
              tempC->next = list1;
              list1 = list1->next;
              tempC = tempC->next;
            }
            else{
                tempC->next = list2;
              list2 = list2->next;
                tempC = tempC->next;
            }
        }
        if(list1==NULL) tempC->next = list2;
        else tempC->next = list1;
        return ans->next;
    }
Struct * mergeKLists(vector<Struct *>& lists) {
        if(lists.size()==0) return NULL;
        while(lists.size()>1){
        Struct * a = lists[lists.size()-1];
        lists.pop_back();
        Struct * b = lists[lists.size()-1];
        lists.pop_back();
              Struct * c = mergeTwoLists(a,b);
        lists.push_back(c);
        }
        return lists[0];
    }

int main(){

    // List 1: 1 -> 4 -> 5
    Struct* l1 = new Struct(1);
    l1->next = new Struct(4);
    l1->next->next = new Struct(5);

    // List 2: 1 -> 3 -> 4
    Struct* l2 = new Struct(1);
    l2->next = new Struct(3);
    l2->next->next = new Struct(4);

    // List 3: 2 -> 6
    Struct* l3 = new Struct(2);
    l3->next = new Struct(6);

    vector<Struct*> lists;
    lists.push_back(l1);
    lists.push_back(l2);
    lists.push_back(l3);

    Struct* result = mergeKLists(lists);
    cout << "Merged List: ";
    printList(result);

    return 0;
}