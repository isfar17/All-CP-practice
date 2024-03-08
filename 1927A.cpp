#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin>>t; 

        while (t--)
        {
            int  len;
            cin>>len;
            string color;
            cin>>color;


            char first_black='W';
            char last_black='W';

            int i=0;
            int j=len-1;

            while (first_black=='W' || last_black=='W' && j>=i)
            {   

                if(color[i]=='B')
                {
                    first_black='B';
                    
                }
                if(color[j]=='B')
                { 
                    last_black='B';
                    
                }
                if(first_black=='B' && last_black=='B')
                    break;
                else
                    {
                    if(first_black!='B')
                        i++;
                    if(last_black!='B')
                        j--;
                     }
            }
        cout<<j-i+1<<"\n";
            
        }
    
    
    
}