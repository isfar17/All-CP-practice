#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'


int main() {

    optimize();
    // file()
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]=='0')
       { 
            int one=count(s.begin(), s.end(), '0');
            if(one==s.size())
            {
                cout<<one<<endl;
                continue;
            }
        }
        else
        {
            int zero=count(s.begin(), s.end(), '1');
            if(zero==s.size())
            {
                cout<<zero<<endl;
                continue;
            }
        }
        if(s.size()==1)
        {
            cout<<1<<endl;
        }
        else
        {
            string st=s;
            int cost=0;
            int i=0;
            while(i < s.size())
            {
                if(int(st[i])==int(s[i]))
                {   
                    char to_find;
                    if(s[i]=='0')
                    {
                        to_find='1';
                    }
                    else
                    {
                        to_find='0';
                    }
                    bool swap=false;

                    
                    for (int j = i+1; j < s.size(); j++)
                    {
                        if(s[j]==to_find)
                        {
                            char tmp=s[i];
                            s[i]=s[j];
                            s[j]=tmp;
                            swap=true;
                            break;
                        }

                    }

                    if(swap==false)
                    {
                        s.erase(s.begin()+i);
                        cost+=1;
                    }
                    while(s[i]==st[i])
                    {
                        s.erase(s.begin()+i);
                        cost+=1;

                    }
       

                    i+=1;
                }
                else
                {
                    i+=1;
                }
            }
            cout<<cost<<endl;
        }
        
    }

}
      