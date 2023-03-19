//File: Video.cpp
#include "Video.h"
#include <iostream>
Video::Video(const string & cn,const string & ti, const string & sub,const string & desc,const string & distri,const string & note,const string & ser,const string & lab)
    :Media(cn, ti, sub, note), description(desc), distributor(distri), series(ser), label(lab)
{}

bool Video:: compare_other(const string & oth) const
{
    if(description.find(oth)<description.length())
        return true; 
    else if(distributor.find(oth)<distributor.length())
        return true; 
    else if(series.find(oth)<series.length())
        return true;
    else if(label.find(oth)<label.length())
        return true;
    else if(notes.find(oth)<notes.length())
        return true;
    else
        return false;
}

void Video:: display() const
{
    cout<<"=========================="<<endl<<"========== VIDEO ========="<<endl<<"=========================="<<endl;
    cout<<"call_number:          "<<call_number<<endl<<"title:                "<<title<<endl<<"subjects:             "<<subjects<<endl;
    cout<<"description:          "<<description<<endl<<"distributor:          "<<distributor<<endl<<"notes:                "<<notes<<endl;
    cout<<"series:               "<<series<<endl<<"label:                "<<label<<endl;
}