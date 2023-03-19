//File: Periodical.cpp
#include "Periodical.h"
#include <iostream>
Periodical::Periodical(const string & cn,const string & ti ,const string & sub,const string & aut,const string & desc,const string & pub,const string & pub_his,const string & ser,const string & note,const string & rel_tit,const string & other_form_tit,const string & gov_do_num)
    :Media(cn, ti, sub, note), author(aut), description(desc), publisher(pub), publishing_history(pub_his), series(ser), related_titles(rel_tit), other_forms_of_title(other_form_tit), govt_doc_number(gov_do_num)
{}

bool Periodical:: compare_other(const string & oth) const
{
    if(author.find(oth)<author.length())
        return true; 
    else if(description.find(oth)<description.length())
        return true; 
    else if(publisher.find(oth)<publisher.length())
        return true;
    else if(publishing_history.find(oth)<publishing_history.length())
        return true;
    else if(series.find(oth)<series.length())
        return true;
    else if(related_titles.find(oth)<related_titles.length())
        return true;
    else if(other_forms_of_title.find(oth)<other_forms_of_title.length())
        return true;
    else if(govt_doc_number.find(oth)<govt_doc_number.length())
        return true;
    else if(notes.find(oth)<notes.length())
        return true;
    else
        return false;
}

void Periodical:: display() const
{
    cout<<"=========================="<<endl<<"======= PERIODICAL ======="<<endl<<"=========================="<<endl;
    cout<<"call_number:          "<<call_number<<endl<<"title:                "<<title<<endl<<"subjects:             "<<subjects<<endl;
    cout<<"author:               "<<author<<endl<<"description:          "<<description<<endl<<"publisher:            "<<publisher<<endl;
    cout<<"publishing_history:   "<<publishing_history<<endl<<"series:               "<<series<<endl<<"notes:                "<<notes<<endl<<"related_titles:       "<<related_titles<<endl;
    cout<<"other_forms_of_title: "<<other_forms_of_title<<endl<<"govt_doc_number:      "<<govt_doc_number<<endl;
}