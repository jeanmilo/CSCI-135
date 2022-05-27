/*
 Name: Claudia Yamamoto
 Date: February 27,2022
 course: CSCI 135
 Prof: TONG YI

 this program will ask, the user for a string representing a date (MM/DD/YYYY)
 and the program will print out the East Basin Storage on that day. 

*/

#include <iostream> 
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std; 

int main(){
	cout<<"Enter date: ";
	string targetDate, date, eastSt, eastEl, westSt, westEl;
	cin>>targetDate;

	//input file stream 
	ifstream fin("Current_Reservoir_Levels.tsv");
	if(fin.fail()){
		cerr<<"File cannot be opened for reading."<<endl;
		exit(1); //exit prog if failed to open file
	}

	//skip the first line in the file since it is a header line
	//we skip so we can access the actual data
	string junk; //new string var
	getline(fin, junk); //read one line from the file
	
	//loop reads the formatted file line by line
	while(fin>> date>> eastSt>> eastEl>> westSt>> westEl){
		fin.ignore(INT_MAX, '\n'); //skips to the end of line
					   //ignoring remaining columns
		if(targetDate == date){
			cout << date << " " << eastSt << endl;
			fin.close();
		}
	}

}

