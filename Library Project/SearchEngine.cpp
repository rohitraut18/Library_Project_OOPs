//File: SearchEngine.cpp
#include "SearchEngine.h"
#include <fstream>

SearchEngine::SearchEngine()
{
    Media* mp;
    ifstream book, video, periodic, film;
    string line;
    char delimeter = '|';
    book.open("book.txt");
    int j = 0;
    while(getline(book, line))
    {
        string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
        for(int i=0; i<line.length(); ++i)
        {
            if(line[i] == delimeter){j = i; break;}
            else{s1.push_back(line[i]);} 
        }
        for(int i=j+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){j = i; break;}
            else{s2.push_back(line[i]);} 
        }
        for(int i=j+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){j = i; break;}
            else{s3.push_back(line[i]);} 
        }
        for(int i=j+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){j = i; break;}
            else{s4.push_back(line[i]);} 
        }
        for(int i=j+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){j = i; break;}
            else{s5.push_back(line[i]);} 
        }
        for(int i=j+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){j = i; break;}
            else{s6.push_back(line[i]);} 
        }
        for(int i=j+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){j = i; break;}
            else{s7.push_back(line[i]);} 
        }
        for(int i=j+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){j = i; break;}
            else{s8.push_back(line[i]);} 
        }
        for(int i=j+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){j = i; break;}
            else{s9.push_back(line[i]);} 
        }
        for(int i=j+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){j = i; break;}
            else{s10.push_back(line[i]);} 
        }
    mp = new Book(s1,s2,s3,s4,s5,s6,s7,s8,s9,s10);
    card_catalog.push_back(mp);
    }
    book.close();

    film.open("film.txt");
    int m = 0;
    while(getline(film, line))
    {
        string s1,s2,s3,s4,s5,s6;
        for(int i=0; i<line.length(); ++i)
        {
            if(line[i] == delimeter){m = i; break;}
            else{s1.push_back(line[i]);} 
        }
        for(int i=m+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){m = i; break;}
            else{s2.push_back(line[i]);} 
        }
        for(int i=m+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){m = i; break;}
            else{s3.push_back(line[i]);} 
        }
        for(int i=m+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){m = i; break;}
            else{s4.push_back(line[i]);} 
        }
        for(int i=m+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){m = i; break;}
            else{s5.push_back(line[i]);} 
        }
        for(int i=m+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){m = i; break;}
            else{s6.push_back(line[i]);} 
        }
    mp = new Film(s1,s2,s3,s4,s5,s6);
    card_catalog.push_back(mp);
    }
    film.close();

    video.open("video.txt");
    int l = 0;
    while(getline(video, line))
    {
        string s1,s2,s3,s4,s5,s6,s7,s8;
        for(int i=0; i<line.length(); ++i)
        {
            if(line[i] == delimeter){l = i; break;}
            else{s1.push_back(line[i]);} 
        }
        for(int i=l+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){l = i; break;}
            else{s2.push_back(line[i]);} 
        }
        for(int i=l+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){l = i; break;}
            else{s3.push_back(line[i]);} 
        }
        for(int i=l+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){l = i; break;}
            else{s4.push_back(line[i]);} 
        }
        for(int i=l+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){l = i; break;}
            else{s5.push_back(line[i]);} 
        }
        for(int i=l+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){l = i; break;}
            else{s6.push_back(line[i]);} 
        }
        for(int i=l+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){l = i; break;}
            else{s7.push_back(line[i]);} 
        }
        for(int i=l+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){l = i; break;}
            else{s8.push_back(line[i]);} 
        }
    mp = new Video(s1,s2,s3,s4,s5,s6,s7,s8);
    card_catalog.push_back(mp);
    }
    video.close();

    periodic.open("periodic.txt");
    int k = 0;
    while(getline(periodic, line))
    {
        string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12;
        for(int i=0; i<line.length(); ++i)
        {
            if(line[i] == delimeter){k = i; break;}
            else{s1.push_back(line[i]);} 
        }
        for(int i=k+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){k = i; break;}
            else{s2.push_back(line[i]);} 
        }
        for(int i=k+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){k = i; break;}
            else{s3.push_back(line[i]);} 
        }
        for(int i=k+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){k = i; break;}
            else{s4.push_back(line[i]);} 
        }
        for(int i=k+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){k = i; break;}
            else{s5.push_back(line[i]);} 
        }
        for(int i=k+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){k = i; break;}
            else{s6.push_back(line[i]);} 
        }
        for(int i=k+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){k = i; break;}
            else{s7.push_back(line[i]);} 
        }
        for(int i=k+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){k = i; break;}
            else{s8.push_back(line[i]);} 
        }
        for(int i=k+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){k = i; break;}
            else{s9.push_back(line[i]);} 
        }
        for(int i=k+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){k = i; break;}
            else{s10.push_back(line[i]);} 
        }
        for(int i=k+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){k = i; break;}
            else{s11.push_back(line[i]);} 
        }
        for(int i=k+1; i<line.length(); ++i)
        {
            if(line[i] == delimeter){k = i; break;}
            else{s12.push_back(line[i]);} 
        }
    mp = new Periodical(s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12);
    card_catalog.push_back(mp);
    }
    periodic.close();

}

vector<Media*> SearchEngine::title_search(const string& patrons_search_phrase) const
{
  vector<Media*> results;
  int z = card_catalog.size();
  for(int i=0; i<z; ++i)
  {
    Media* mp=card_catalog.at(i);
    bool it_is_there=mp->compare_title(patrons_search_phrase);
    if(it_is_there)
        results.push_back(mp);
  }
  return results;
}

vector<Media*> SearchEngine::call_num_search(const string& patrons_search_phrase) const
{
  vector<Media*> results;
  int z = card_catalog.size();
  for(int i=0; i<z; ++i)
  {
    Media* mp=card_catalog.at(i);
    bool it_is_there=mp->compare_cn(patrons_search_phrase);
    if(it_is_there)
        results.push_back(mp);
  }
  return results;
}

vector<Media*> SearchEngine::subject_search(const string& patrons_search_phrase) const
{
  vector<Media*> results;
  int z = card_catalog.size();
  for(int i=0; i<z; ++i)
  {
    Media* mp=card_catalog.at(i);
    bool it_is_there=mp->compare_subjects(patrons_search_phrase);
    if(it_is_there)
        results.push_back(mp);
  }
  return results;
}

vector<Media*> SearchEngine::other_search(const string& patrons_search_phrase) const
{
  vector<Media*> results;
  int z = card_catalog.size();
  for(int i=0; i<z; ++i)
  {
    Media* mp=card_catalog.at(i);
    bool it_is_there=mp->compare_other(patrons_search_phrase);
    if(it_is_there)
        results.push_back(mp);
  }
  return results;
}

SearchEngine::~SearchEngine()
{
    for(int i=0; i<card_catalog.size(); ++i)
    {
        delete card_catalog[i];
    }
}