/*
exercise feb 28,2022

define user-defined pow funct, compare with 
pow function provided by cmath
*/

#include <iostream>
#include <cmath>

using namespace std;


//we put it before the mian function because the main func is going to use it
//and the main func should be used as an entryway and not a ground for defining
//things that may be used globally 
double myPow(double base, int exp);


int main(){

	

	return 0;

}

double myPow(double base, int exp){
	if(base == 0){
		
	}

	double result = 1;
	//base * base * ... * base
	// ie multiply base by base exp times
	if(exp >= 0){
		for(int i = 0; i < exp; i++){
			result *= base;
		}
	}else{
		for(int i = 0; i < -exp; i++){
			result *= 1/base;
		}
	}
}
