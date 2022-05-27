/*
Name: Claudia Yamamoto
Date: February 27, 2022
Prof: Tong Yi 
Assignment: Lab 3 C

this program will ask user to input two dates. the program will check each
day in between the two dates given and reort which basin had higher
elevations on that day by printing "east", "west", or "equal". 
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){

	//init vars and array
	string date, startDate, endDate;
	double eastSt, eastEl, westSt, westEl;
	bool reachedStart = false;
	
	//input file stream
	ifstream fin("Current_Reservoir_Levels.tsv");
	if(fin.fail()){
		cerr<<"File cannot be opened for reading.";
		exit(1);
	}

	//skip header line
	string junk;
	getline(fin, junk);
	
	//receive start and end dates
	cout<<"Enter starting date: ";
	cin>>startDate;
	cout<<"Enter ending date: ";
	cin>>endDate;

	//read file 
	while(fin>>date>>eastSt>>eastEl>>westSt>>westEl){
	fin.ignore(INT_MAX, '\n');
	
	if(date == startDate){
		reachedStart = true;
	}
	if(reachedStart == true){
	//condition loop to keep taking files in
		if (eastEl > westEl) cout<<date<<" East"<<endl;
		if (westEl > eastEl) cout<< date<< " West"<<endl;
		if (eastEl == westEl) cout<< date<< " Both"<<endl;
	}
	if(endDate == date){
		fin.close();
	}
	}

}
