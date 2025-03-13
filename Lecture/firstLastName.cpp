#include <iostream>
using namespace std;
int main(){
	//enter name from console
	cout<<"Enter name in format of first name first last name second: ";
	string name;
	cin>>name;
	
	//process name to extract last name and first name.
	size_t index = name.find(" ");
	
	//index is the location of the first occurrence of " " in name.
	if(index<0) //no space in name
	{
		cerr<<"no space in inputted name.";
		return -1;
	}
	string firstName = name.substr(0,index);
	string lastName = name.substr(index+1);
	cout<<lastName<<", "<<firstName<<endl;

}
