//File: Media.cpp
#include "Media.h"

Media::Media(const string &cn,const string &ti,const string &sub,const string &note) 
    :call_number(cn), title(ti), subjects(sub), notes(note)
{}

bool Media::compare_cn(const string &cn) const
{
    if(call_number.find(cn)<call_number.length())
        return true;
    else
        return false;
}

bool Media:: compare_title(const string &ti) const
{
    if(title.find(ti)<title.length())
        return true;
    else
        return false;
}

bool Media:: compare_subjects(const string &sub) const
{
    if(subjects.find(sub)<subjects.length())
        return true;
    else
        return false;
}

Media::~Media()
{}