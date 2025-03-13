/*
Author: Claudia Yamamoto
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab7A

this program will remove the indentation of an inputed string.
it will do this through a function called removeLeadingSpaces(string line)
*/

#include <iostream>

using namespace std;

string removeLeadingSpaces(string line){
	bool idFirst = false;
	string result;
	for(int i = 0; i<line.length(); i++){
		if(!isspace(line[i])){
			idFirst = true;
		}
		if(idFirst == true){
			result += line[i];
		}
	}
	return result;
}

int main(){
	string uin;
	while(getline(cin,uin,'\n')){
		cout<<removeLeadingSpaces(uin)<<endl;
	}
}
