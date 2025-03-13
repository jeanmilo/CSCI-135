/*
Name: claudia ayamamoto
Date; May10
Prof: Tong Yi
Assignment: Lab 12 D
purrr
purr
*/
#include <vector>
using namespace std;

vector<int> sumPairWise( vector<int> &v1,  vector<int> &v2){
    vector<int> veck;
    if(v1.size()>=v2.size()){
        for(int i = 0; i<v1.size(); i++){
            v2.push_back(0);
            veck.push_back(v1[i] + v2[i]);
        }
    } else if(v1.size()<v2.size()){
        for(int i = 0; i<v2.size(); i++){
            v1.push_back(0);
            veck.push_back(v1[i] + v2[i]);
        }
    }
    return veck;
}