/*
Name:Claudia Yamamoto
Date: 03/21/22
Prof: Tong Yi
Assignment: Lab 6C

this program will contain a function (encryptVigenere) which will
encrypt the users plain text and shift it by the value of a character 
in a cipher text. 
*/

#include <iostream> 
using namespace std; 

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


string encryptVigenere(string plaintext, string ciphertext){
	string result;
	int counter = 0;
	
	for(int i = 0; i < plaintext.length(); i++){
		if(isalpha(plaintext[i])){
			if(counter == ciphertext.length()) counter = 0;
			result += shiftChar(plaintext[i], ciphertext[counter]-97);
			counter++;
        }	
		else result += plaintext[i];
	}
	return result;
}

int main() {
	string pltxt, ctxt;
	cout<<"Enter plaintext: ";
	getline(cin, pltxt);
	cout<<"Enter ciphertext: ";
	getline(cin, ctxt);

	cout<<encryptVigenere(pltxt, ctxt)<<endl;

}
