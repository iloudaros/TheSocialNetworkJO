#include "User.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "FriendRequest.hpp"
#include "Message.hpp"

using namespace std;

vector<user> user::userlist;


string user::getname(){
    return name;
}
user::user(){};

user* user::setuser(){
    cout<<"Well hello there you beautiful user darling\nPlease give me your name: ";
    cin>>name;
    cout<<"Fantastic! Now give me your e-mail: ";
    cin>>email;
    cout<<"Great! Now I'll need yout to choose a password: ";
    cin>>password;
    cout<<"You are now registered and ready to go";
    return this;
}

