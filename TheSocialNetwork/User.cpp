#include "User.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "FriendRequest.hpp"
#include "Message.hpp"

using namespace std;

vector<user> user::userlist;

user::user(){};//ready

user::user(string a,string b,string c)//ready
{
    this->name=a;
    this->email=b;
    this->password=c;
}




string user::getname()//ready
{
    return name;
}





void user::sentrequestto(user & receiver)//ready

    {
    friendRequest temp (*this, receiver);
    this->reqsent.push_back(temp);
    receiver.reqrec.push_back(temp);
    }





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







