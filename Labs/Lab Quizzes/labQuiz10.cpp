/*
Name: Claudia Yamamoto
Date: Apr 26
Prof: Tong Yi
Assignment: Lab Quiz 10
*/

#include <iostream>
#include <string>
using namespace std;

int unbalanced_brackets(string input){
    int open = 0;
    int closed = 0;

    for (int i = 0; i < input.length(); i++){
        if (input[i] == '{') open++;
        else if (input[i] == '}') closed++;
    }

    int difference = open - closed;
    return difference;
}

int main(){
    string input;
    cout << "Enter open and closed brackets: ";
    cin >> input;
    cout << unbalanced_brackets(input) << endl;
}
