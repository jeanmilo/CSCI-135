/*
Name: Claudia Yamamoto
Date: Apr 17
Prof: Tong Yi
Assignment: Lab 9 A

this program will output 3d coordinates
*/

#include <iostream>
using namespace std;

string *createAPoemDynamically(){
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main(){
    while (true){
        string *p;
        p = createAPoemDynamically();
        delete p;
    }
}
