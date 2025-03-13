/*
Name: Claudia Yamamoto
Date: 03/12/22
Prof: Tong Yi
Assignment: Lab 4C

this program will ask the user to input a size and then 
will print a diagonal cross of that dimension.
*/

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<< "Enter a number: ";
	cin>>num;
	for(int i = 0; i < num; i++){
		for(int j=0; j<=i; j++){
			cout<<" ";
			cout<<"*";
		}
		for(int k = (num-i) * 2; k > 1; k--){
            		cout<<" ";
        		cout<<"*" << endl;
		}
	}
    
}
