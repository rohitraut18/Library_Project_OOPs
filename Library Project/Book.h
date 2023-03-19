//File: Book.h
#ifndef BOOK_H
#define BOOK_H
#include <string>
#include "Media.h"
using namespace std;
class Book : public Media
{
    private:
        string author, description, publisher, city, year, series;
    public:
        Book(const string & cn,const string & ti,const string & sub,const string & aut,const string & desc,const string & pub,const string & ci,const string & yr,const string & ser,const string & note);
        bool compare_other(const string & oth) const;
        void display() const;
};

#endif


