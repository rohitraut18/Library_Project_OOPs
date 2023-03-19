//File: Video.h
#ifndef VIDEO_H
#define VIDEO_H
#include <string>
#include "Media.h"
using namespace std;

class Video : public Media
{
    private:
        string description,distributor,series,label;
    public:
        Video(const string & cn,const string & ti, const string & sub,const string & desc,const string & distri,const string & note,const string & ser,const string & lab) ;
        bool compare_other(const string & oth) const;
        void display() const;
};

#endif