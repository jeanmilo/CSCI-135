/*
Name: claudia ayamamoto
Date; May14
Prof: Tong Yi
Assignment: Lab 13 B
pur
r
r
*/
#include <iostream>
using namespace std;

void printRange(int left, int right){
    if(left <= right){
        cout<<left<<" ";
        left++;
        printRange(left, right);
    }
}
int sumRange(int left, int right){
    if (right < left) return 0;
    return left + sumRange(left + 1, right);
}

int sumArray(int *arr, int size){
    if(size == 0) return 0;
    return (arr[size-1]) + sumArray(arr, size-1);
}

bool isAlphanumeric(string s){
    if(s.length() == 0) return true;
    if (!isalnum(s[0])) return false;
    return isAlphanumeric(s.substr(1));
}