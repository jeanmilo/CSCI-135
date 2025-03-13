/*
Name: Claudia yamamoto
Date: May1
Prof: Tong Yi
Assignment: Lab 11A
*/
#include <iostream> 
#include <string> 
using namespace std;

class Profile{
private: 
    string name;
    string username;

public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername();
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};

class Network{};

int main() {
    Profile p1("marco", "Marco");    
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco (@marco)

    p1.setDisplayName("Marco Rossi"); 
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco Rossi (@marco)
    
    Profile p2("tarma1", "Tarma Roving");    
    cout << p2.getUsername() << endl; // tarma1
    cout << p2.getFullName() << endl; // Tarma Roving (@tarma1)
}

string Profile::getUsername(){
    return username;
}
string Profile::getFullName(){
    string result = name + " (@" + username + ")";
    return result;
}
void Profile::setDisplayName(string dspn){
    name = dspn; 
}
Profile::Profile(string usrn, string dspn){
    name = dspn;
    username = usrn;
}
Profile::Profile() : name(""), username("") {}