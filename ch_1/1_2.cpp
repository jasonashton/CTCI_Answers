#include <iostream>
#include <vector>
#include <algorithm>

//1.2 Check Permutation: Given two strings, write a method to decide if one is a permutation of the other
//Page 90, Hints 1, 84, 122, 131, Answer 193

//My answer, O(N) O(1)
//similar to solution 2
bool is_permutation(std::string str_1, std::string str_2){

    std::vector<int> set_1(128);
    std::vector<int> set_2(128);

    for(int i = 0; i < str_1.size(); i++){
        int val_1 = (int) str_1[i];
        set_1.at(val_1) += 1;
    }

    for(int j = 0; j < str_2.size(); j++){
        int val_2 = (int) str_2[j];
        set_2.at(val_2) += 1;
    }

    return (set_1 == set_2);
}

//inspired by book solution 1
bool is_permutation_two(std::string str_1, std::string str_2){
    std::sort(str_1.begin(), str_1.end());
    std::sort(str_2.begin(), str_2.end());
    return (str_1 == str_2);
}

int main(){
    std::string str_1 = "the ears";
    std::string str_2 = "hear set";
    std::string str_3 = "nothing";

    std::cout << "string one equals string 2: " << is_permutation_two(str_1, str_2) << std::endl;
    std::cout << "string two equals string 3: " << is_permutation_two(str_2, str_3) << std::endl;
    

    return 0;
}
