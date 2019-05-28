#include "FriendRequest.hpp"
#include "Message.hpp"
#include "User.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

vector<user> user::userlist;



user::user(){};//ready

user::user(string a,string b,string c)//ready
{
    this->name=a;
    this->email=b;
    this->password=c;
}




void user::setname(string newname)//ready
{
    name=newname;
}

string user::getname()//ready
{
    return name;
}



void user::setemail(string newemail)//ready
{
    email=newemail;
}

string user::getemail()//ready
{
    return email;
}



void user::sentrequestto(user & receiver)//ready

    {
    friendRequest temp (*this, receiver);
    this->reqsent.push_back(temp);
    receiver.reqrec.push_back(temp);
    }



user* user::setuser()//ready

 {
     
    cout<<"Well hello there you beautiful user darling\nPlease give me your name: ";
     string buff;
    getline(cin, buff);
    getline(cin,name);
     
     int check=0;
     int i;
     
         
    cout<<"Fantastic! Now give me your e-mail: ";
     do{
    cin>>email;
         for(i=0;i!=user::userlist.size();i++)
             if (userlist[i].email==email)
             {
                 check=1;
                 cout<<"\n\nThe given email is already in use. -.- \n\nTry again:";
                 break;
             }
     }while(check==1);
     
    cout<<"Great! Now I'll need yout to choose a password: ";
    cin>>password;
    cout<<"You are now registered and ready to go";
    return this;
 }



void user::accept(int choice)//ready
{
    friendlist.push_back(reqrec[choice-1].getsender());
    reqrec.erase(reqrec.begin() + (choice-1));
    cout<< "\n\nYou are now friends with "<< friendlist[friendlist.size()-1]->name;
}

void user::reject(int choice)//ready
{
    reqrec.erase(reqrec.begin() + (choice-1));
    cout<<"\n\n Thaaaank you, next\n";
}


string user::getpassword()//ready
{    
 return password;
}


void user::showwall()
{
    int i;
    cout<< owner->getname();
    
    for(i=0;i<posts.size();i++)
    {
        cout<< posts[i].toString();
    }
}

