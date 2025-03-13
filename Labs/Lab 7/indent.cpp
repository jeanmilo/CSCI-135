/*
Author: Claudia Yamamoto
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab7A

this program will remove the indentation of an inputed string.
it will do this through a function called removeLeadingSpaces(string line)
To count open blocks, we need to count how many curly braces get opened 
and closed on each line, so we need to count { and }
indent.cpp that enhances the program from the previous task. 
As it reads the input line by line, it should also count the number 
of open and closed { } in it, and keep track of how many blocks 
is currently open at the beginning of each line
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

int countChar(string line, char c){
	int count = 0;
	for (int i = 0; i < line.length(); i++){
		if (line[i] == c) count ++;
	}
	return count;
}

void printLine(string line, int indent){
	for (int i = 0; i < indent; i++) cout << '\t';
	cout << line << endl;
}


int main(){
        string uin;
	int open = 0;
        while(getline(cin,uin,'\n')){
                uin = removeLeadingSpaces(uin);

		if(uin[0] == '}') printLine(uin, open-1);
		else printLine(uin, open);

		open += countChar(uin, '{') - countChar(uin, '}');
        }
}
