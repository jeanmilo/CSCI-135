/* 
* Name: Claudia Yamamoto
* Date: February 22,2022
* Course: CSCI 135
*
* This program will prompt user to enter an int and then print 
* 'I love C++' that many times. For example if input is 5 then
* it will print it out 5 times. 
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
	string loveString = "I love C++";
	int num;
	cout<<"Enter an int: ";
	cin>>num;

	for(int i=0; i<(num); i++){
		cout<<loveString<<endl;
	}
	
}
