/*
idea: generate random floating point number x and y in [-1,1]
so it is similar to throwing a dart into the square where 
x [-1,1] and y is [-1,1]

to calculate the possibility that point (x,y) falls in 
the unit circle centered at 0,0, we calculate the number of 
times we hit the circle that is x^2 + y^2 ,= 1. this means 
the dart falls into the circle. 

divide that number by the total number of throws, that is 
the probability when number of throws is big enough (like 10,000),
is pi/4, the area of circle divided by the area of the square
whose sides are 2.

double x;
double y;

x = 1.0 * rand() / RAND_MAX; //it is like use red component /255


*/

#include <iostream>
#include <cstdlib> //srand, rand , RAND_MAX
#include <ctime>

using namespace std;

int main(){
	double x;
	double y;
	int numHits = 0;
	const int NUM_THROWS = 10000;

	srand(time(NULL));

	for(int i = 0; i<NUM_THROWS; i++){
		x = 1.0 * rand() / RAND_MAX;
		x *= 2; //x is a random floating number in [0,2]
		x -= 1; //x is a random lfoating number in [-1,1]
		
		y = 1.0 * rand() / RAND_MAX; 
		y *= 2;
		y -= 1;

		if (x*x + y*y <= 1){
			numHits++;
		}
	}
	cout<< "pi estimate is: "
	    << 4.0 * numHits /NUM_THROWS
	    << endl;
}
