/******************************************************************************

Name: Claudia Yamamoto
Date: April 2022
Prof: Tong Yi 
Assignment: lab quiz 5

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) cout<<arr[i]<<endl;

    return 0;
}