#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'


int main() {

    optimize()
    // file()
    int t;
    cin>>t;

    
    while(t--)
    {
        vector<pair<char,int>> alphabets;
        char al='a';
        for (int i = 0; i <26; i++)
        {
        alphabets.push_back(make_pair(al+i,0));
        }
        int len;
        cin>>len;
        string data="";
        for (int i = 1; i <=len; i++)
        {
            int x;
            cin>>x;
            for(int j=0;j<26;j++)
            {
                if(x==alphabets[j].second)
                    { 
                    alphabets[j].second++;
                    data+=alphabets[j].first;
                    break;
                    }
            }
        }

        cout<<data<<endl;
        
    }

}