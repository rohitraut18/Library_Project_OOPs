//File: library.cpp
#include "SearchEngine.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  SearchEngine se;
  string search_type;
  int count =1;
  string search_string;
for(;;)
{
  vector<Media*> matches;
  cout<<"1) call_number\n2) title\n3) subject\n4) other\n5) exit\n";
  if(count%2==1)
  {
  getline(cin, search_type);
  if(search_type == "5")
  {
    break;
  }
  count++;
  }
  if(count%2==0)
  {
  cout<<"Enter keyphrase: "<<endl;
  getline(cin, search_string);
  count++;
  }
  
  if(search_type=="1")
  {
    matches=se.call_num_search(search_string);   
  }
  else if(search_type=="2")
  {
    matches=se.title_search(search_string);
  }
  else if(search_type=="3")
  {
    matches=se.subject_search(search_string);
  }
  else if(search_type=="4")
  {
    matches=se.other_search(search_string);
  }
  for(int i=0; i<matches.size(); ++i)
  {
    Media* mp=matches.at(i);
    mp->display();
  }
}
  return 0;
}