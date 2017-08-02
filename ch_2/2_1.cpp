#include "../stdc++.h"

/*
 * Remove Dups! Write code to remove duplicates from an unsorted linked list.
 * FOLLOW UP
 * How would you solve this problem if a temporary buffer is not allowed?
 * Hints: #9, #40
*/

using namespace std;

struct node{
    int val;
    node *next;
};

//Answer is in o(n) time, the follow up would just be having a runner that
//checks every other value, which runs in n^2, which i have elected not to
//code.
node* remove_dups(node* root){
    unordered_map<int, bool> seen {};
    node* current_node = root;
    node* prev_node = nullptr;

    while(current_node != nullptr){
        
        if(seen.find(current_node->val) != seen.end()){ //if already in map
            prev_node->next = current_node->next;
            prev_node = current_node;
            current_node = current_node->next;
            delete current_node;
            
        }else{
            seen.insert(make_pair(current_node->val, true));
            cout << current_node->val << " ";
            prev_node = current_node;
            current_node = current_node->next;
        }
    }
    cout << "\n";

    return root;
}

int main() {
    node *root = new node;
    root->val = 10;

    node *one = new node;
    one->val = 18;

    root->next = one;

    node *two = new node;
    two->val = 11;

    one->next = two;

    node *three = new node;
    three->val = 10;

    two->next = three;

    remove_dups(root);
}
