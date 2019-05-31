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


 void message::toString(int depth)
    {
        int i;
        cout<<sender->getname()<< date<<endl;
        for (i=0; i<depth; i++) cout<<" ";
        cout<<"-------"<< endl;
        for (i=0; i<depth; i++) cout<<" ";
        cout<<text<< endl;
        for (i=0; i<depth; i++) cout<<" ";
        cout<<"-------"<< endl;
        for (i=0; i<depth; i++) cout<<" ";
        cout<<"Liked by: "<<likes<<(likes>1?" people":" person")<<endl;
       
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
