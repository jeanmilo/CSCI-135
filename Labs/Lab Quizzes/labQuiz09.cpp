/*
Name: Claudia Yamamoto
Date: Apr 26
Prof: Tong Yi
Assignment: Lab Quiz 9
*/

#include <iostream>
using namespace std;

class Date{
    public:
        int year, month, day;
        string day_of_week;
};

void printDate(Date *input){
    cout << input -> day_of_week << ", " << input -> month << "/" << 
            input -> day << "/" << input -> year << endl; 
}

int main(){
    int year, month, day;
    string day_of_week;

    Date input;
    input.year = year;
    input.month = month;
    input.day = day;
    input.day_of_week = day_of_week;

    cout << day_of_week << ", " << month << "/" << day << "/" << year << endl;
}
