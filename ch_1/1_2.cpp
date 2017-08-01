#include "../stdc++.h"

/*
Check Permutation: Given two strings, write a method to decide if one 
is a permutation of the other.
Hints: #7, #84, #722, #737
*/

using namespace std;


//My answer, nlogn
bool perm_one(string str_1, string str_2){
	

	sort(str_1.begin(), str_1.end());
	sort(str_2.begin(), str_2.end());

	if(str_1 == str_2){
		cout << "Equal: " << str_1 << " " << str_2 << "\n";
		return true;
	}
	cout << "Not equal: " << str_1 << " " << str_2 << "\n";
	return false;
}

//another answer, o(n)
bool perm_two(string str_1, string str_2){

	map<char, int> map_1;
	map<char, int> map_2;

	if(str_1.size() != str_2.size()){
		cout << "Uneven sizes.\n";
		return false;
	}

	auto it_1 = str_1.begin();
	auto it_2 = str_2.begin();

	while((it_1 < str_1.end()) && (it_2 < str_2.end())){
		auto map_it_1 = map_1.find(*it_1);
		auto map_it_2 = map_2.find(*it_2);
		
		if(map_it_1 != map_1.end()){ //already there
			map_it_1->second++;
		}else{
			map_1.insert(make_pair(*it_1, 1)); //insert it
		}

		if(map_it_2 != map_2.end()){ //already there
			map_it_2->second++;
		}else{
			map_2.insert(make_pair(*it_2, 1));
		}

		it_1++;
		it_2++;
	}
	if(map_1 == map_2){
		cout << "Equal: " << str_1 << " " << str_2 << "\n";
		return true;
	}
	cout << "Not equal: " << str_1 << " " << str_2 << "\n";
	return false;
}
int main() {
	std::string str_1 = "jason";
	std::string str_2 = "nojas";
	std::string str_3 = "hola";

	perm_two(str_1, str_2);
	perm_two(str_1, str_3);
	return 0;
}
