#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    int l_count=0,l_index=INT_MAX;
    int h_count=0,h_index=INT_MAX;
    int e_count=0,e_index=INT_MAX;
    int o_count=0,o_index=INT_MAX;

    string new_s="";
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='h')
            {
                if(h_count==1)
                {
                    continue;
                }
                else
                {
                    new_s+=s[i];
                    h_count++;
                    h_index=i;
                }
            }
        if(s[i]=='e')
            {
                if(e_count==1)
                {
                    continue;
                }
                else
                {
                    if(i>h_index)
                    {
                        new_s+=s[i];
                        e_count++;
                        e_index=i;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        if(s[i]=='l')
            {
                if(l_count==2)
                {
                    continue;
                }
                else
                    if(i>e_index && i>h_index)
                    {
                        new_s+=s[i];
                        l_count++;
                        l_index=i;
                    }
                    else
                    {
                        continue;
                    }
            }
        if(s[i]=='o'){
                if(o_count==1){
                    continue;
                }
                else
                    if(i>l_index && i>e_index && i>h_index && l_count==2){
                        new_s+=s[i];
                        o_count++;
                        o_index=i;
                    }
                    else
                    {
                        continue;
                    }
            }
    }
    if(new_s=="hello")
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}