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
     int* cc;
     cc=&check;
         
    cout<<"Fantastic! Now give me your e-mail: ";
     do{check=0;
         cin>>email;
         
         for(i=0;i<user::userlist.size();i++)
         {
             if (userlist[i].email==email)
             {
                 *cc=1;
                 cout<<"\n\nThe given email is already in use. -.- \n\nTry again:";
             }
         }
     }while(check==1);
     
    cout<<"Great! Now I'll need you to choose a password: ";
    cin>>password;
    cout<<"You are now registered and ready to go";
    return this;
 }



void user::acceptplain(int choice)//ready
{
    friendlist.push_back(reqrec[choice-1].getsender());
    reqrec[choice-1].getsender()->friendlist.push_back(this);
    reqrec.erase(reqrec.begin() + (choice-1));
    
}

void user::accept(int choice)
{
    acceptplain(choice);
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
    int x;
    cout<<"\n\n\t"<< name<<"\n~~*~~*~~*~~*~~*~~*~~*~~\n\n\n"<<endl;
    if(posts.size()==0) cout<<"This wall is empty\n (like my soul) :(";
    else{
        for(i=0;i<posts.size();i++)
        {
            cout<<i+1<<". ";
            posts[i].toString(0);
            cout<<"\n";
        
            if(posts[i].replies.size()!=0)
            {
                for(x=0;x<posts[i].replies.size();x++)
                    {
                        cout<<" |";
                        posts[i].replies[x].toString(1);
                    }
            }
            cout<<"\n";
        }
    }
}








void user::remfriend(int choice)//ready
{
    friendlist.erase(friendlist.begin() + (choice-1));
}


void user::showfriends()//ready
{
    int i;
    cout<<"\t\t\t -----Friendlist-----\n\n";
    for(i=0;i<friendlist.size();i++)
    {
        
        cout<<i+1<<"."<<friendlist[i]->getname()<<endl;
        
        cout<<endl;
    }
    
    /*cout<<"Do you hate anyone from this list?\n1.yes\n2.no\n\n";
    cin>> i;
    if (i==1)cout<<"Wanna unfriend them?\n1.yes\n2.no\n\n";
    cin>> i;
    if (i==1)
    {
        cout<<"Give me their number:";
        cin>>i;
        
        int x;

        for(x=0;x<friendlist[i]->friendlist.size();i++)
            if (friendlist[i]->friendlist[x]->getemail()==this->getemail())
            {
                friendlist[i]->friendlist[x]->remfriend(x);
                break;
            }
    
        cout<<"You and "<<friendlist[i]->getname()<<"now hate each other\n\n";
        remfriend(i-1);
        
    }*/
}
    
    
    

void user::postto(user& A)//ready
{
    message temp(*this,A);
    
    A.posts.push_back(temp);
    
}

void user::postto(user& A,string text)
{
    message temp(*this,A,text);
    
    A.posts.push_back(temp);
    
}



void user::like(int choice,user* currentlyin)//ready
{
    if (currentlyin->posts.size()<=choice-1|choice-1<0)cout<<"There is no such post -.-";
    else{
        int i;
        int check=0;
    
        if (currentlyin->posts[choice-1].likedby.size()==0)
        {
            currentlyin->posts[choice-1].like(this);
            check=2;
        }
            else
                for (i=0;i<currentlyin->posts[choice-1].likedby.size();i++)
                    {
                        if(currentlyin->posts[choice-1].likedby[i]->getemail()==this->getemail())check=1;
                        if(check==1)break;
                    }
    
    
        if(check==0)currentlyin->posts[choice-1].like(this);
        else if(check==1)cout<<"\nYou have already liked this post.\n";

    
        }
}




void user::showrequests()
{
    int choice=0;
    int i;
    vector<friendRequest*>results;
    for(i=0;i<reqrec.size();i++)
    {
        choice++;
        cout<<choice<<". "<<reqrec[i].getsender()->getname()<<","<<reqrec[i].getsender()->getemail()<<" "<<reqrec[i].gettime();
        results.push_back(&reqrec[i]);
    }
    
    if (results.size()==0)cout<<"\n\nNo requests to examine\n\n";
    else{
    cout<<"\nWhich request do you wanna examine?(Choose 0 to exit)\n";
    cin>>i;
    if(i==0);
        else{
            do{
                cout<<"Do you accept "<<results[i-1]->getsender()->getname()<<"?"<<"\n1.yes\n2.no\n";
                cin>>choice;
                if(choice!=1&choice!=2)cout<<"\nYou can only press 1 or 2\n";
              }while(choice!=1&choice!=2);
            if (choice==1) this->accept(i);
            else this->reject(i);
            
            }
    
        }
}
