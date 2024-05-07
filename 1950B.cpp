#include <bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main() {

    optimize
    int n;
    cin>>n;
    while (n--)
    {
        int t;
        cin>>t;
/* so the way is to make two string pattern. first to make a string starts with ## and ..
next is pattern 2. we start with .. and ## . then combine them together to make them
like a 2n size array in the final loop

the string making pattern is like this:
for t=1
string 1: ##
string 2: ##

combined string:
##
##

for t=2
string 1: ##..  // we will make it by checking if i is even add string is ## or else ..
string 2: ..##  // we will make it by checking if i is even add string is .. or else ##

combined string:
##..
##..
..##
..## 
*/
        string pattern1;
        for (int i = 1; i <= t; i++)
        {
            if(i%2 == 1)
            {
                pattern1+="##";
            }
            else if(i%2 == 0)
            {
                pattern1+="..";
            }
        }

        string pattern2;
        for (int i = 1; i <= t; i++)
        {
            if(i%2 == 1)
            {
                pattern2+="..";
            }
            else if(i%2 == 0)
            {
                pattern2+="##";
            }
        }
        for (int i = 1; i <=t; i++)
        {
        if(i%2==1)
        {
            cout<<pattern1<<endl<<pattern1<<endl;
        }
        else
        {
            cout<<pattern2<<endl<<pattern2<<endl;
        }
        }
        
        }
        
}