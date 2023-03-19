//File: SearchEngine.h
#ifndef SEARCHENGINE_H
#define SEARCHENGINE_H
#include <string>
#include <vector>
#include "Media.h"
#include "Book.h"
#include "Periodical.h"
#include "Video.h"
#include "Film.h"
using namespace std;

class SearchEngine 
{
    private:
        vector<Media*> card_catalog;
    public:
        SearchEngine();
        vector<Media*> title_search(const string&) const;
        vector<Media*> call_num_search(const string& patrons_search_phrase) const;
        vector<Media*> subject_search(const string& patrons_search_phrase) const;
        vector<Media*> other_search(const string& patrons_search_phrase) const;
        ~SearchEngine();
};

#endif