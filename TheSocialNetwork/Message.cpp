#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "Message.hpp"

using namespace std;


    message::message(user A,user B)
    {
        cout << "Write a message." << endl;
        cin >> message;
        
        time_t date;
        date = time(NULL);
        char *tm = ctime(&date);
        
        sender = A.name;
        receiver = B.name;
        
        likes = 0;
    }    
    meesage::toString()
    {
        cout << tm << endl;
        cout << user.sender << endl;
		cout << message << endl;
		cout << "Like number: " << likes << endl;
    }
    
}

