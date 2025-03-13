/******************************************************************************

Name: Claudia Yamamoto
Date: April 2022
Prof: Tong Yi 
Assignment: lab quiz 5

*******************************************************************************/
#include <iostream>

using namespace std;

int max3(int a, int b, int c){
    if(max(a,b) > c) return(max(a,b));
    else if (max(a,c) > b) return (max(a,c)); 
}

int main()
{
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	
    cout<<max3(a,b,c)<<endl;

    return 0;
}