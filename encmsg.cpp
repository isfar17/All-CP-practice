#include <bits/stdc++.h>
using namespace std;

int main() 
{
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  
  int t;
  cin>>t;
  while (t--)
  { 
    int x;
    cin>>x;
    string s;
    cin>>s;

    for (int i = 0; i < s.size()-1; i+=2)
      {
        char temp=s[i];
        s[i]=s[i+1];
        s[i+1]=temp;

      }
    for (int i = 0; i <= s.size()-1; i++)
    {
        s[i]=97+(25-(s[i]-97));
    }
    
    
  cout<<s<<'\n';

    }
  
  
}