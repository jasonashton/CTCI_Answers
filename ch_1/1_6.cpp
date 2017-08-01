#include "../stdc++.h"

/*
String Compression: Implement a method to perform basic string compression using the counts
of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the
"compressed" string would not become smaller than the original string, your method should return
the original string. You can assume the string has only uppercase and lowercase letters (a - z).
Hints:#92, #110 
*/

using namespace std;

//my answer
string compress(string str){
    string output_string {};
    
    vector<pair<char, int>> char_map;

    char_map.push_back( make_pair(str[0], 1));

    for(auto it = ++str.begin(); it != str.end(); it++){
        char last_letter = (char_map.end()-1)->first;
        if(*(it) == last_letter){
            (char_map.end() -1)->second++;
        }else{
            char_map.push_back( make_pair(*(it), 1) );
        }
    }

    for(auto i = char_map.begin(); i!= char_map.end(); i++){
        cout << i->first << " " << i->second << "\n";

        output_string += i->first;
        output_string += to_string(i->second);

    }
    if(output_string.size() == str.size()){
        return str;
    }
    cout << output_string << endl;

    return output_string;
}

int main() {
    string str_1 {"aabcccccaaa"};
    compress(str_1);
}
