/*
Name:Claudia Yamamoto
Date: 03/21/22
Prof: Tong Yi
Assignment: Lab 6C

this program will contain a function (decryptVigenere and decryptCaesar) 
which will decrypt the users plain text by shifting it by a value. 
it will also have functions creates from prvious tasks in lab 6
like shiftChar, encryptCaesar, and encryptVigenere
this program will test out all functions.
it will first ask the user to input plaintext, then ask for a right shift for the 
Caesar cipher and report the ciphertext and its subsequent decryption. 
After that, it should do the same for the Vigenere cipher.
*/

#include <iostream>
using namespace std;

char shiftChar(char c, int rshift){
        if(islower(c)){ 
            if((c + rshift) > 122) c += rshift - 26;
            else if((c + rshift) < 97) c += rshift + 26;
            else c+=rshift;
        }
        else if(isupper(c)){
            if((c + rshift) > 90) c += rshift - 26;
            else if((c + rshift) < 65) c += rshift + 26;
            else c+=rshift;
        
        }
        return c;
}

string encryptCaesar(string plaintext, int rshift){
        for(int i = 0; i < plaintext.length(); i++){
                plaintext[i] = shiftChar(plaintext[i], rshift);
        }
        return plaintext;
}

string decryptCaesar(string cipher, int shift){
        string result;
        for(int i = 0; i<cipher.length(); i++){
                result += shiftChar(cipher[i], (-1)*shift);
        }
        return result;
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

string decryptVigenere(string cipher, string plain){
        string result;
        int rshift = 0;
        for(int i = 0; i<cipher.length(); i++){
                if(isalpha(cipher[i])){
                    if(rshift == plain.length()) rshift = 0;
                    result += shiftChar(cipher[i], (-1)*(plain[rshift]-97));
                    rshift++;
                }
                else result += cipher[i];
        }
        return result;
}
int main(){
        int shift;
        string plain,keyword, cipher;

        cout<<"Enter plaintext: ";
        getline(cin, plain);

        cout<<"\n= Caesar ="<<endl;
        cout<<"Enter shift: ";
        cin>>shift;
        cout<<"Cipher text: "<<encryptCaesar(plain,shift)<<endl;
        cout<<"Decrypted: "<<decryptCaesar(encryptCaesar(plain,shift), shift);

        cout<<"\n\n= Vigenere ="<<endl;
        cout<<"Enter keyword: ";
        cin.ignore();
        getline(cin,keyword);
        cout<<"Cipher text: "<<encryptVigenere(plain,keyword)<<endl;
        cout<<"Decrypted: "<<decryptVigenere(encryptVigenere(plain,keyword), keyword);


}
