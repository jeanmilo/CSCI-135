/*
Name: Claudia Yamamoto
Date: 03/19/22
Prof: Tong Yi
Assignment: Lab 5A

this program will: 

define a function called isDivisibleBy that will 
evaluate whether n is divisible by d. the function should either 
return true or false

define a function called isPrime that should return true if n 
is a prime, otherwise return false. 

*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d){
	if(d == 0){
		return false;
	}
	else if (n%d == 0){
		return true;
	}
	else return false;
}

bool isPrime(int n){
	bool finalResult = true;
	if(n == 0 || n==1){
                finalResult = false;
        }
	if(n<1){
		finalResult = false;
	}
	for(int i = n/2; i>1; i--){
		if(n%i == 0){
			finalResult = false;
		}
	}
	return finalResult;
}

int nextPrime(int n){
	int add = 1;
	int result;
	bool check = true;

	while (check == true){
		if(isPrime(n+add) != true){
			add++;
		}
		else if(isPrime(n+add) == true){
			result = n+add;
			check = false;
		}
	}
	return result;
}

int countPrimes(int a, int b){
	int count = 0;
	for(int i = a; i <= b; i++){
		if(isPrime(i) == true) count++;
	}
	return count;
}

bool isTwinPrime(int n){
	int add = 2;
	bool check = false;
	
	if(isPrime(n) == true){
		if(isPrime(n - add) == true){
			check = true;
		}else if(isPrime(n+add) == true){
			check = true;
		}
	}
	return check;
}

int nextTwinPrime(int n){
	int add = 1;
	int result;
	bool check = true;

	while(check == true){
		if(isTwinPrime(n+add) == false){
			add++;
		}else if(isTwinPrime(n+add) == true){
			result = n + add;
			check = false;
		}
	}
}

int largestTwinPrime(int a, int b){
        int count = 0;
        for(int i = a; i <= b; i++){
                if(isTwinPrime(i) == true){
		count = i;
        }
	}
        return count;
}

int main(){
	//input
	int num;
	int divisor;
	cout<<"Please enter integer: ";
	cin>>num;
	cout<<"Please enter second integer: "; 
	cin>>divisor;
	
/*
	//isDivisibleBy
	if (isDivisibleBy(num, divisor) == true){
		cout<<"Yes"<<endl;
	}else cout<<"No"<<endl;
*/
/*
	//isPrime
	if (isPrime(num) == true){
		cout<<"Yes"<<endl;
	}else{ 
		cout<<"No"<<endl;
	}
*/

	//nextPrime
	//cout<<nextPrime(num)<<endl;
	
	//count primes
	//cout<<countPrimes(num, divisor)<<endl;	

/*
	//isTwinPrime
	if(isTwinPrime(num)==true)
		cout<<"Yes"<<endl;
	else if(isTwinPrime(num) == false){
		cout<<"No"<<endl;
	}
*/

//	cout<<nextTwinPrime(num)<<endl;

	cout<<largestTwinPrime(num, divisor)<<endl;

}
