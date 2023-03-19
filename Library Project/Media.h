//File: Media.h
#ifndef MEDIA_H
#define MEDIA_H
using namespace std;
#include <string>

class Media
{
    protected:
        string call_number, title, subjects, notes;
    public:
        Media(const string &cn,const string &ti,const string &sub,const string &note);
        bool compare_cn(const string &cn) const;
        bool compare_title(const string &ti) const;
        bool compare_subjects(const string &sub) const;
        virtual bool compare_other(const string &other) const =0;
        virtual void display() const=0;
        virtual ~Media();
};

#endif