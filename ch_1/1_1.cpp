#include "../stdc++.h"

/*
Is Unique: Implement an algorithm to determine if a string has all unique 
characters. What if you cannot use additional data structures?
Hints: #44, # 777, # 732
*/

using namespace std;

//my answer, nlogn
bool is_unique(string to_check){
	sort(to_check.begin(), to_check.end());

	int len = to_check.size();

	for(int i = 1; i < len - 1; i++){
		if((to_check[i-1] == to_check[i]) ||
			(to_check[i+1] == to_check [i])){
			cout << to_check[i];
			return false;
		}
			
	}
	return true;
}


int main() {
	string not_unique {"are all these characters unique"};
	string unique {"butiam"};

	cout << is_unique(not_unique) << "\n";
	cout << is_unique(unique) << "\n";
}
