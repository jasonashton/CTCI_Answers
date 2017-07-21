#include <iostream>
#include <vector>

//URLify
//replace all spaces with %20
//Question 1.3, page 90, hints 53, 118, answer 194

//you're supposed to do it in place
std::string urlify_not_inplace(std::string str_1){
    std::string output;

    for(std::string::iterator i = str_1.begin(); i != str_1.end(); i++){
        if((*i) == ' '){
           output += "%20"; 
        }else{
            output += (*i);
        }
    }

    return output;
}



int main(){
    std::string str_1 = "http:// make me a url . com";
    std::cout << urlify_not_inplace(str_1) << std::endl;

    //correctly
    std::string str_2 = "Mr John Smith    ";
    int str_2_len = 13;
    int spaces = (str_2.length() - str_2_len);

    for(int i = str_2.length() - 1; i > spaces - 1; i--){
        std::cout << str_2.at(i - spaces);
        
        if(str_2.at(i - spaces) == ' '){
            str_2.at(i-1) = '0';
            str_2.at(i-2) = '2';
            str_2.at(i-3) = '%';
            i -=3;
        }else{
            str_2.at(i) = str_2.at(i - spaces);
        }
        
    }
    std::cout << std::endl;

    std::cout << str_2 << std::endl;

    return 0;
}
