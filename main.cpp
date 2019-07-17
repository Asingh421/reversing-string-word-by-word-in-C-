#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
void sw(char *c,char *b)
{char temp=*c;
*c=*b;
*b=temp;

}
int main()
 {string s;
 getline(cin,s);


  for(int i=0;i<s.length();i++)
   {int m=0;
       for(int j=i;s[j]!=' ';j++)
       {m++;
         if(j==s.length())
            break;
       }
       int l=i;
       for(int k=0;k<m;k++)
       {cout<<s[m+i-1-k];
       }
       cout<<" ";
       i+=m;
       m=0;

   }
   //cout<<s;
 }

