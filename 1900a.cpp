#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;

    while (t--)
    {
        int r;
        cin>>r;
        string s;
        cin>>s;
        int dot_counter=0,answer=0;

        //so here is the issue, according to the statement,if i is an emtpy vessel and its previous and next vessel is filled with water,we will consider it as filled. then no matter how much we take
        // water from the vessel,it wil be filled up. so that means if we somehow find this three dot index_sequence, no matter how big the string is, we can fill it by replacing water infinite amount of time

        //but if we dont find this sequence, means there is no way to replace water in any of the vessel . thus we need to fil every vessel manually and count the amount of dots.
        for (int i = 0; i < s.size(); i++)
        {   
            if (s[i]=='.')
            {
               dot_counter++;
            }
            
            if(s[i]=='.' && s[i-1]=='.' && s[i+1]=='.')
            {
                answer=2;
                break;// means no need to fill any more vessel. 2 is enough, others will be filled up by just replacing water, 
            }
            if(s[i]=='#')// wont count 
            {
                continue;
            }
        }
        if (answer!=2)// we are checking if we have found any sequence at the end of the string.
        {
            answer=dot_counter; // if not means there is no such sequence, so we have to fill every vessel.
        }
        cout<<answer<<endl;
        
        
    }

}