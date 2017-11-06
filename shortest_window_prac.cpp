#include<bits/stdc++.h>
using namespace std;

const int no_of_chars = 256;

/*
useful links : https://knowledgecharity.wordpress.com/2012/11/29/find-the-shortest-sub-string-window-that-contains-all-the-characters-of-a-given-string/
https://articles.leetcode.com/finding-minimum-window-in-s-which/
*/
string findwindow(string str,string l)
{
  int min_window_begin = 0;
  int str_len = str.length();
  int l_len = l.length();
  if (str_len < l_len)
	{
		cout << "No such window exists";
		return "";
	}
  int freq_char_l[no_of_chars] ={0};
  int freq_char_str[no_of_chars] ={0};

  for(int i=0;i<l_len;i++)
  {
    freq_char_l[l[i]]++;
  }

  int count=0;
  int min_window_len = INT_MAX;

  for(int begin =0,j=0;j<str_len;j++)
  {
    freq_char_str[str[j]]++;

    if(freq_char_str[str[j]]<=freq_char_l[str[j]])
    {
      count++;
    }
    if(count == l_len)
    {
      while(freq_char_l[str[begin]] == 0 || freq_char_str[str[begin]] >freq_char_l[str[begin]])
      {
        if(freq_char_str[str[begin]] > freq_char_l[str[begin]])
        {
          freq_char_str[str[begin]]--;
        }
        begin++;
      }
      int window_len = j-begin+1;
      if(window_len<min_window_len)
      {
        min_window_begin = begin;
        //min_window_end = j;
        min_window_len = window_len;
      }
    }
  }
  return str.substr(min_window_begin,min_window_len);
}

int main()
{
  string str;
  string l;
  getline(cin,str);
  getline(cin,l);
  cout<<"substring is :"<<findwindow(str,l)<<endl;
  return 0;
}
