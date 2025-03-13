/*
NamE: claudia ayamamoto
Date; May10
Prof: Tong Yi
Assignment: Lab 12 C
purrr
*/
#include <vector>
using namespace std;

void gogeta(vector<int> &goku, vector<int> &vegeta){
    for(int i = 0; i<vegeta.size(); i++){
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}