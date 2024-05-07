#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'


int main() {

    optimize()

    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        int counter[2]={0,0};
        for (int i = 0; i < s.size(); i++)
        {
            counter[int(s[i]-'0')]++;
        }
        int ans=0;
        for (int i = 0; i <= s.size(); i++)
        {   // we will know if a strig making isnt possible if either no 0 or no 1 is left
             // or if we have reached at the end of the string after finishing all swaps.

            if(i==s.size() || counter[1-int(s[i]-'0')]==0)
            {
                ans=s.size()-i;// the answer is the total string- the new string len counter

                break;
            }
            counter[1-int(s[i]-'0')]-=1; // if above case arnt true means we keep swapping
            
        }
        cout<<ans<<endl;      
        
    }

}