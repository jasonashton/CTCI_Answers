#include "../stdc++.h"

/*
 * Delete Middle Node: Implement an algorithm to delete a node in the middle (i.e., any node but
 * the first and last node, not necessarily the exact middle) of a singly linked list, given only access to
 * that node.
 * EXAMPLE
 * lnput:the node c from the linked lista->b->c->d->e->f
 * Result: nothing is returned, but the new linked list looks like a->b->d->e->f
 * Hints:#72 
*/

using namespace std;

struct node{
    char val;
    node *next;
    node(char c) : val{ c }, next{ nullptr } {}
};

void print_list(node* root){
    
    while(root != nullptr){
        cout << root->val << " ";
        root = root->next;
    }
    cout << "\n";
}

void remove_middle(node* root){
    node* next_node = root->next;
    char next_val = next_node->val;
    node* next_next = next_node->next;

    root->val = next_val;
    root->next = next_next;
    delete next_node;
}

int main() {
    node * head = new node('a');
    head->next = new node('b');
    head->next->next = new node('c');
    head->next->next->next = new node('d');
    head->next->next->next->next = new node('e');

    print_list(head);
    remove_middle(head->next->next);
    print_list(head);
}
