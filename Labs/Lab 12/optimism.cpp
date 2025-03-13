/*
NamE: claudia ayamamoto
Date; May10
Prof: Tong Yi
Assignment: Lab 12 A
purrr
*/
#include <vector>
using namespace std;

vector <int> goodVibes(const vector <int> v){
    vector<int> veck;
    for(int i = 0; i < v.size(); i++){
        if(v[i] >= 0) veck.push_back(v[i]);
    }
    return veck;
}