#include "../stdc++.h"

/*
 * One Away: There are three types of edits that can be performed on strings: insert a character,
 * remove a character, or replace a character. Given two strings, write a function to check if they are
 * one edit (or zero edits) away.
 * EXAMPLE
 * pale, ple -> true
 * pales, pale -> true
 * pale, bale -> true
 * pale, bake -> false
 * Hints:#23, #97, #130 
*/

using namespace std;

//My answer, runs in n time
bool one_edit_away(string str_1, string str_2){
   int num_differences {};

   if(abs(str_1.size() - str_2.size()) > 1){
       cout << "Size is too different\n";
       return false;
   }

   int arr_1[128];
   int arr_2[128];

   fill_n(arr_1, 128, 0);
   fill_n(arr_2, 128, 0);

   for(auto i = str_1.begin(); i != str_1.end(); i++){
       arr_1[(int) *(i)] += 1;
   }
   
   for(auto j = str_2.begin(); j != str_2.end(); j++){
       arr_2[(int) *(j)] += 1;
   }

   for(int k = 0; k < 128; k++){
       num_differences += abs(arr_1[k] - arr_2[k]);
   }

   if(num_differences <= 1){
       cout << str_1 + " and " << str_2 + " are one edit away\n";
       return true;
   }else{
       cout << str_1 + " and " << str_2 + " are NOT one edit away\n";
       return false;
   }
   
}

int main() {
    string str_1 = "pale";
    string str_2 = "ple";
    string str_3 = "hello";

    one_edit_away(str_1, str_2);
    one_edit_away(str_1, str_3);
}
