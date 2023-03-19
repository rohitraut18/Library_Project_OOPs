//File: Book.cpp
#include "Book.h"
#include <iostream>

Book::Book(const string & cn,const string & ti,const string & sub,const string & aut,const string & desc,const string & pub,const string & ci,const string & yr,const string & ser,const string & note)
    : Media(cn, ti, sub, note), city(ci), author(aut), description(desc), publisher(pub), year(yr), series(ser) 
{}

bool Book:: compare_other(const string & oth) const
{
    if(city.find(oth)<city.length())
        return true; 
    else if(author.find(oth)<author.length())
        return true; 
    else if(description.find(oth)<description.length())
        return true;
    else if(publisher.find(oth)<publisher.length())
        return true;
    else if(year.find(oth)<year.length())
        return true;
    else if(series.find(oth)<series.length())
        return true;
    else if(notes.find(oth)<notes.length())
        return true;
    else
        return false;
}

void Book:: display() const
{
    cout<<"=========================="<<endl<<"========== BOOK =========="<<endl<<"=========================="<<endl;
    cout<<"call_number:          "<<call_number<<endl<<"title:                "<<title<<endl<<"subjects:             "<<subjects<<endl;
    cout<<"author:               "<<author<<endl<<"description:          "<<description<<endl<<"publisher:            "<<publisher<<endl;
    cout<<"city:                 "<<city<<endl<<"year:                 "<<year<<endl<<"series:               "<<series<<endl<<"notes:                "<<notes<<endl;
}