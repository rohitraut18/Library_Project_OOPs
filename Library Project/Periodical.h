////File: Periodical.h
#ifndef PERIODICAL_H
#define PERIODICAL_H
#include <string>
#include "Media.h"
using namespace std;

class Periodical : public Media
{
    private:
        string author,description,publisher,publishing_history,series,related_titles,other_forms_of_title,govt_doc_number;
    public:
        Periodical(const string& cn,const string& ti ,const string& sub,const string& aut,const string& desc,const string& pub,const string& pub_his,const string& ser,const string& note,const string& rel_tit,const string& other_form_tit,const string& gov_do_num) ;
        bool compare_other(const string& oth) const;
        void display() const;
};

#endif