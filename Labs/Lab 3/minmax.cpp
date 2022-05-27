/*
Name: Claudia Yamamoto
Course: CSCI 135
Prof: Tong YI
Assignment: Lab 3 B

this program will find the minimum and maximum sotrage in East basin in 2018
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){
	
	//variable init
	string date;
	double eastSt, eastEl, westSt, westEl;
	double minVal = 100, maxVal = 0;
	
	//input file stream
	ifstream fin("Current_Reservoir_Levels.tsv");
	if(fin.fail()){
		cerr<<"File cannot be opened from reading.";
		exit(1);
	}

	//remove header line 
	string junk;
	getline(fin, junk);

	//reading file
	while(fin>> date>> eastSt>> eastEl>> westSt>> westEl){
		//skips to the end of the line
		//ignoring remaining columns
		fin.ignore(INT_MAX, '\n');
		
		// finding minimum val
		if(eastSt < minVal){ 
			minVal = eastSt;
		}
		// finding maximum val 
		if(eastSt > maxVal){
			maxVal = eastSt;
		}
	}	
	cout<<"minimum storage in East basin was: "<<minVal<<endl;
	cout<<"MAXimum storage in East basin was: "<<maxVal<<endl;
			
	fin.close();

}
