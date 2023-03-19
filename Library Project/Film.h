//File: Film.h
#ifndef FILM_H
#define FILM_H
#include <string>
#include "Media.h"
using namespace std;

class Film : public Media
{
    private:
        string director,year;
    public:
        Film(const string & cn,const string & ti,const string & sub,const string & direc,const string & note,const string & yr);
        bool compare_other(const string & oth) const;
        void display() const;
};

#endif
