#include <iostream>

using namespace std; 
int main(){

	string color; 
cout<<"enter color(red, green, yellow): ";
cin>> color; 
//what is the difference between cin>>color and 
//getLine(cin, color)?
//the former takes a word
//the latter takes a sentence (can contain spaces) 

if(color == "red"){
	cout<<"stop";
}else if(color == "yellow"){
	cout<<"slow down";
}else if(color == "green"){
	cout<<"go";
}else{
	cout<<"wrong color";
}


return 0;
}
