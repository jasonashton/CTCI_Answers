#include "../stdc++.h"

/*
 *Return Kth to Last: Implement an algorithm to find the kth to last element of a singly linked list.
 Hints:#8, #25, #41, #67, #126
*/

using namespace std;

struct node{
    int val;
    node *next;
};

int kth_to_last(node* root, int k){
    int num_traversed {};

    node* lagger = nullptr; //will lag behind and return kth to last
    node* current = root;

    while(current != nullptr){

        if(num_traversed == k){
            lagger = root;
        }

        //shift to next
        current = current->next;
        if(num_traversed >= k){
            lagger = lagger->next;
        }
        num_traversed++;
    }

    cout << lagger->val << "\n";
    return lagger->val;

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
    three->val = 14;

    two->next = three;

    kth_to_last(root, 2);
}
