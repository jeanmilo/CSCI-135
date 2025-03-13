/*
Name: Claudia Yamamoto
Date: 03/12/2022
Prof: Tong Yi
Assignment: Lab 4E

this program will take in an integer, store it in length, and then print 
out an upside down triangle of length length.
if the input height is impossibly large for the given width, then the
program should report: "Impossible shape!"
*/
#include <iostream> 
using namespace std; 

int main(){
	//input reg
	int length;
	cout<<"Input side length: ";
	cin>>length;

	//if num size ok do
	if(length <= 20){
		cout<<"Shape: "<<endl;
		
		for(int line = 0; line < length; line++){
			//i = " "
			//for loop: i = 0 -> int num 
			for(int i = 0; i < line; i++){
				cout<<" ";
			}

			//j = "*"
			//for loop: j = num -> 0
			for(int j = length - line; j > 0; j--){
				cout<<"*";
			}
			cout<<endl;
		}
	}
	//else, print impossible shape
	else{
		cout<<"Impossible shape.";
	}
}
