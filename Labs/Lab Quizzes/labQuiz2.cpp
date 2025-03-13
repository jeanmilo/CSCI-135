/*
Name:Claudia Yamamoto
Date: 03/21/22
Prof: Tong Yi
Assignment: Lab 6C

this program will allow the user to enter a string, and then print out
one letter at a time until the entire string is displayed. then it will 
decrease by one letter until no more letters are displayed.
*/

#include <iostream>
using namespace std;

int main(){
	//make string
	string b;
	cout<<"Enter string: ";
	getline(cin, b);
	
	//for loop for first half
	for(int i = 0; i < b.length(); i++){
		for(int j = 0; j <= i; j++){
			cout<<b[j];
		}
		cout<<endl;
	}

	//cout<<b<<endl;
	
	for(int i = b.length(); i>0; i--){
		for(int j = 0; j<i-1; j++){
			cout<<b[j];
		}
		cout<<endl;
	}
}

