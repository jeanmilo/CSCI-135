/*
 * Name: Claudia Yamamoto
 * Date: 03/09/22
 * Prof: Tong Yi
 * Assignment Lab 6B
 *
 * this program will take a phrase from the user and then ask the user
 * for the number to shift each character to encrypt the message 
 * by caesar cipher. 
 */


#include <iostream> 

using namespace std;

//a helper function to shift one character by rshift
char shiftChar(char c, int rshift){
	//if(c is a lower case letter)
	//	if rshift + c > 122, subtract by 26
	//	return this
	if(islower(c)){
		if((c + rshift) > 122) c += rshift - 26;
		else c+=rshift;
	}

	//elseif(c is an upper case letter)
	//	if rshift + c > 90, subtract by 26
	//	return this
	else if(isupper(c)){
		if((c + rshift)>90) c += rshift - 26;
		else c+=rshift;
	}

	//else //not alphabetical so it must be symbolic or numerical
	//	return c if not alphabetical
	return c;
}

// caesar cipher encrypt.
string encryptCaesar(string plaintext, int rshift){
	for(int i = 0; i < plaintext.length(); i++){
		plaintext[i] = shiftChar(plaintext[i], rshift);
	}
	return plaintext;
}

int main(){
	
	string plaintxt;
	int shift;
	cout<<"Enter plaintext: ";
	getline(cin, plaintxt);
	cout<<"Enter shift: ";
	cin>>shift;

	cout<<encryptCaesar(plaintxt, shift)<<endl;
}
