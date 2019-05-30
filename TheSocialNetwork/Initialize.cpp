

#include "Initialize.hpp"

auto &userlist =  user::userlist;

void initialization::inibasic(){
    
    {
    user newuser("John Loudaros","johnloudaros@hotmail.com","123456");
    userlist.push_back(newuser);
    }
    
    {
    user newuser("Orestis Spyridakis","ore@kwloxwri.com","123456");
    userlist.push_back(newuser);
    }
    
    {
        user newuser("Koula koulitsa","koulak@kotetsi.kot","123456");
        userlist.push_back(newuser);
    }
    
    userlist[1].sentrequestto(userlist[0]);
    userlist[0].accept(1);
    
    
    
    
    
}
