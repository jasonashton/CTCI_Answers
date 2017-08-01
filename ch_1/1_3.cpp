#include "../stdc++.h"

/*

URLify: Write a method to replace all spaces in a string with '%20: 
You may assume that the string has sufficient space at the end to 
hold the additional characters, and that you are given the "true" 
length of the string. (Note: If implementing in Java, please use a 
character array so that you can perform this operation in place.)
EXAMPLE
Input: "Mr John Smith " J 13 Output: "Mr%20J ohn%20Smith" Hints: #53, #7 78
*/

using namespace std;

//my answer, n
string urlify(string str, int true_len){
	int offset = str.size() - true_len;

	//from end to offsetf
	for(auto i = (str.end() - offset - 1); i >= str.begin(); i--){
		cout << *i;
		if(*i == ' '){ //this  is a space
			*(i + offset - 0) = '0';
			*(i + offset - 1) = '2';
			*(i + offset - 2) = '%';
			offset -= 2;
		}else{
			*(i + offset) = *i;
		}
	}
	cout << "\n\n";
	cout << str << "\n";
	return str;
}

int main() {
	urlify("Mr John Smith    ", 13);
}
