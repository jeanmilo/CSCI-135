/*
name: claudia yamamoto
date: 03/12/22
prof: tong yi
assignment: Lab 4F

this program will print an upside down trapezoid of given size 'length'
and 'width' however, if the input height is impossibly large for the
given 
*/

#include <iostream>
using namespace std;

int main (){
	int width, height;
	cout<<"Input width: ";
	cin>>width;
	cout<<"Input height: ";
	cin>>height;
	
	//if good size
	//good size = (height-1)*2 <= width 
	if((height-1)*2 < width){
		cout<<endl;
		//for (k < height)
		for (int k = 0; k<height; k++){
			//for i = 0 & < k
			//i = " " 
			for(int i = 0; i<k; i++){
				cout<<" ";
			}
		
			//for i = width-(2*k) & > 0; 
			// i = "*"
			for(int i = width-(2*k); i > 0; i--){
				cout<<"*";
			}
			cout<<endl;
		}
		
	}
	//else
	else{
		cout<<"Impossible shape."<<endl;
	}
}
