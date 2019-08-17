#include<bits/stdc++.h>
using namespace std;
int find_last(string s)
 {int i;
     for( i=s.length()-1;i>=0;i--)
      {if(s[i]==' ')
        break;
      }
  return i;

 }
void reverse_string(string s)
  {int a=find_last(s);
    if(a<=0)
    {cout<<s;
        return;
    }

   string str=s.substr(0,a);
   cout<<s.substr(a+1);
   cout<<" ";
   reverse_string(str);



  }

int main()
{
string s;
getline(cin,s);
reverse_string(s);}
