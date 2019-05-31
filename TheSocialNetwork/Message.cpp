#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "Message.hpp"

using namespace std;


    message::message(user& A,user& B)
    {
        cout << "Write a message." << endl;
        getline(cin, text);
        getline(cin, text);
        
        date = time(NULL);
        //char* tm = ctime(&date);
        
        sender = &A;
        receiver = &B;
        
        likes = 0;
    }

message::message(user& A,user& B,string text)
{
    this->text=text;
    
    date = time(NULL);
    //char* tm = ctime(&date);
    
    sender = &A;
    receiver = &B;
    
    likes = 0;
}



 void message::toString(int depth)
    {
        int i;
        cout<<sender->getname()<<" -"<< ctime(&date);
        for (i=0; i<depth; i++) cout<<" ";
        cout<<"-------"<< endl;
        for (i=0; i<depth; i++) cout<<" ";
        cout<<text<< endl;
        for (i=0; i<depth; i++) cout<<" ";
        cout<<"-------"<< endl;
        
        if(depth==0)
        {
        for (i=0; i<depth; i++) cout<<" ";
        cout<<"Liked by: ";
        if (likes==0)cout<<"no one";
        else cout<<likes<<(likes>1?" people":" person")<<endl;
        }
       
    }
    
void message::like(user* liker)//ready
{
    likes++;
    
    likedby.push_back(liker);
    
}


void message::reply(user* replier)

{
    message temp(*replier,*receiver);
    replies.push_back(temp);
    
}
