#include "../stdc++.h"

/*
 * Rotate Matrix: Given an image represented by an NxN matrix, where each pixel in the image is 4
 * bytes, write a method to rotate the image by 90 degrees. Can you do this in place?
 * Hints: #51, # 100 
*/

using namespace std;

typedef vector<vector<short>> img_arr;

void print_img(img_arr img){
    for(auto i : img){
        for(auto j : i){
            cout << j << " ";
            if(j < 10){
                cout << " ";
            }
        }
        cout << "\n";
    }
}

img_arr rotate_img(img_arr img){
    for(auto i : img){
        for(auto j : img){

        }
    }
    return img;
}

int main() {
    img_arr my_img = {{1, 3, 4, 6}, {2, 9, 12, 14}, {8, 9, 1, 3}, {10, 12, 1, 2}};
    cout << "Input array: \n";
    print_img(my_img);
}
