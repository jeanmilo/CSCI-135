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
    bool following[MAX_USERS][MAX_USERS];

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
    Network(){
        numUsers = 0;
        for(int i = 0; i < MAX_USERS; i++)
            for(int j = 0; j < MAX_USERS; j++)
                following[i][j] = false;
        };

    bool addUser(string usrn, string dspn){
        if(numUsers < MAX_USERS)
            if(usrn.length() != 0 && isAlphaOrNumOnly(usrn) && findID(usrn) == -1){
                profiles[numUsers] = Profile(usrn, dspn);
                numUsers += 1;
                return true;
            }
        return false;
    };

    bool follow(string usrn1, string usrn2){
        int usrn1ID = findID(usrn1),
            usrn2ID = findID(usrn2);

        if(usrn1ID != -1 && usrn2ID != -1){
            following[usrn1ID][usrn2ID] = true;
            return true;
        }
        return false;
    };

    void printDot(){
        std::cout << "digraph {" << std::endl;
        for(int i = 0; i < numUsers; i++)
            std::cout << "\t\"@" + profiles[i].getUsername() + "\"" << std::endl;
    
        std::cout << "\n";

        for(int i = 0; i < numUsers; i++)
            for(int j = 0; j < numUsers; j++)
                if(following[i][j] == true)
                    std::cout << "\t\"@" + profiles[i].getUsername() + "\" -> \"@" + profiles[j].getUsername() + "\"" << std::endl;
        std::cout << "}";
    }

};

int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");
    
    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
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
