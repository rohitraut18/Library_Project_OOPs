//File: Film.cpp
#include "Film.h"
#include <iostream>
Film::Film(const string & cn,const string & ti,const string & sub,const string & direc,const string & note,const string & yr)
    :Media(cn, ti, sub, note), director(direc), year(yr)
{}

bool Film:: compare_other(const string & oth) const
{
    if(director.find(oth)<director.length())
        return true; 
    else if(year.find(oth)<year.length())
        return true; 
    else if(notes.find(oth)<notes.length())
        return true;
    else
        return false;
}

void Film:: display() const
{
    // cout<<title<<endl;
    cout<<"=========================="<<endl<<"========== FILM =========="<<endl<<"=========================="<<endl;
    cout<<"call_number:          "<<call_number<<endl<<"title:                "<<title<<endl<<"subjects:             "<<subjects<<endl;
    cout<<"director:             "<<director<<endl<<"notes:                "<<notes<<endl<<"year:                 "<<year<<endl;
}