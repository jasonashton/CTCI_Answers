#include <iostream>
#include <vector>

//Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data
//structures? Page 90, Hints 44, 117, 132, Answer 192

//O(N!)
bool unique_try_one(std::string the_string){
    std::cout << "Running on: " << the_string << std::endl;

    for(int i = 0; i < the_string.size(); i++){
        for(int j = i+1; j < the_string.size(); j++){
            if( the_string[i] == the_string[j]){
                std::cout << "Not unique." << std::endl;
                return false;
            }
        }
    }

    std::cout << "Is unique!" << std::endl;
    return true;
}

//O(n), O(1)
bool unique_answer(std::string the_string){

    std::vector<bool> charset(128);
    for(int i = 0; i < the_string.length(); i++){
        if( charset.at((int) the_string[i]) ){
            std::cout << "Not unique." << std::endl;
            return false;
        }
        charset.at((int) the_string[i]) = true;
    }

    std::cout << "Is unique!" << std::endl;
    return true;
}

int main(){
    std::string not_unique = "Some random string that isn't unique";
    std::string is_unique = "I am";

    unique_answer(not_unique);
    unique_answer(is_unique);

    std::cout << "Finished." << std::endl;

    return 0;
}
