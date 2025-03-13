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

class Network{
private:
    static const int MAX_USERS = 20;
    int numUsers;
    Profile profiles[MAX_USERS];
       
    int findID(string usrn){
        for(int i = 0; i <= numUsers; i++)
            if(profiles[i].getUsername() == usrn)
                return i;
            return -1;
    };

    bool isAlphaOrNumOnly(string w){
        for(int i = 0; i < w.length(); i++)
            if(not isalnum(w[i]))
                return false;
        return true;
    };
    
public:
    Network()   {numUsers = 0;};

    bool addUser(string usrn, string dspn){
        if(numUsers < MAX_USERS)
            if(usrn.length() != 0 && isAlphaOrNumOnly(usrn) && findID(usrn) == -1){
                profiles[numUsers] = Profile(usrn, dspn);
                numUsers += 1;
                return true;
            }
        return false;
    };
};

int main() {
  Network nw;
  cout << nw.addUser("mario", "Mario") << endl;     // true (1)
  cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

  cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
  cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
  cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

  for(int i = 2; i < 20; i++)
      cout << nw.addUser("mario" + to_string(i), 
                 "Mario" + to_string(i)) << endl;   // true (1)

  cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
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
