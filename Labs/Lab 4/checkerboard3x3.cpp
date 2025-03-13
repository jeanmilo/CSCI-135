/*
name: claudia yamamoto
date: 03/12/2022
prof:tong yi
assignment: Lab 4G

this program will ask the user to input width and height and
then print out a checkerboard of 3-by-3 squares. it should work even
if the input dimensions are not a dimension of three.
*/

#include <iostream>
using namespace std;

int main(){

	int width, height;
        cout<<"Input width: ";
        cin>>width;
        cout<<"Input height: ";
        cin>>height;
	cout<<endl; 
	
	for(int row = 0; row < height; row++){
		for(int col = 0; col < width; col++){
			if(((row/3) + (col/3)) % 2 == 0){
				cout<<"*";
			}else cout<<" ";
		}
		cout<<endl;
	}
}


