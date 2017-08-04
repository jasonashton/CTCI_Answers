#include "../stdc++.h"

/*
 * Sum Lists: You have two numbers represented by a linked list, where each node contains a single
 * digit. The digits are stored in reverse order, such that the 1 's digit is at the head of the list. Write a
 * function that adds the two numbers and returns the sum as a linked list.
 * EXAMPLE
 * Input: (7-> 1 -> 6) + (5 -> 9 -> 2).That is,617 + 295.
 * Output: 2 -> 1 -> 9. That is, 912.
 * FOLLOW UP
 * Suppose the digits are stored in forward order. Repeat the above problem.
 * EXAMPLE
 * lnput:(6 -> 1 -> 7) + (2 -> 9 -> 5).That is,617 + 295.
 * Output: 9 -> 1 -> 2. That is, 912.
 * Hints: #7, #30, #71, #95, #109 
*/

using namespace std;

struct node{
    int val;
    node *next;
    node(int d ) : val{ d }, next{ nullptr } {}
};

void printList( node * head ) {
  while ( head ) {
    std::cout << head->val << "-->";
    head = head->next;
  }
  std::cout << "nullptr" << std::endl;
}

void insert( node * & head, int data ) {
  node * newNode = new node(data);
  if ( head == nullptr ) {
    head = newNode;
  } else {
    node * curr = head;
    while( curr->next ) {
      curr = curr->next;
    }
    curr->next = newNode;
  }
}

int add_ll(node* first, node* second){
    int count_1 {};
    int count_2 {};
    int sum_1 {};
    int sum_2 {};

    while(first != nullptr){
        sum_1 += first->val * pow(10, count_1);
        count_1++;
        first = first->next;
    }
    while(second != nullptr){
        sum_2 += second->val * pow(10, count_2);
        count_2++;
        second = second->next;
    }

    cout << sum_1 + sum_2 << "\n";
    return sum_1 + sum_2;
}

int main() {
    node* ll_1 = nullptr;
    for ( int i = 0; i < 4; ++i ) {
        insert(ll_1, rand() % 9);
    }
    printList(ll_1);

    node* ll_2 = nullptr;
    for ( int i = 0; i < 4; ++i ) {
        insert(ll_2, rand() % 9);
    }
    printList(ll_2);

    add_ll(ll_1, ll_2);
}
