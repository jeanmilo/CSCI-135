/******************************************************************************

Name: Claudia Yamamoto
Date: April 2022
Prof: Tong Yi 
Assignment: lab quiz 5

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    string colour;
    
    ifstream fin("data.txt");
    if(fin.fail()){
        cerr<<"File cannot be opened for reading";
        exit(1);
    }
    
    while(fin>>colour){
        cout<<colour<<endl;
    }
    
    fin.close();
    
    return 0;
}