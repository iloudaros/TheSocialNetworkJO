#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "Message.hpp"

using namespace std;


    message::message(user& A,user& B)
    {
        cout << "Write a message." << endl;
        cin >> text ;
        
        time_t date;
        date = time(NULL);
        char *tm = ctime(&date);
        
        sender = &A;
        receiver = &B;
        
        likes = 0;
    }


 void   message::toString()
    {
        
        //Πρέπει να φτιάξεις το πως θα εκτυπώνεται η μεταβλητή tm
        cout << sender << endl;
		cout << text << endl;
		cout << "Like number: " << likes << endl;
    }
    


